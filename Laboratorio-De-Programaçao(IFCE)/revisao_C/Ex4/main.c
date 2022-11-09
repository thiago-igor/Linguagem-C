
#include <pthread.h> 
#include <stdio.h>
#include <stdlib.h> 
// There are 5 philosophers (0,1,2,3,4) and 5 chopsticks (0,1,2,3,4)
#define NUM 5

// States of a philosopher
#define THINKING 0
#define HUNGRY 1
#define EATING 2

int food = 5; //The total amount of food on the table.
int monitor = HUNGRY;
int state[NUM]; //The state of a particular philosopher during the simulation

//The mutex for monitor variable and the condition resource_ready
pthread_mutex_t monitor_mutex;
pthread_cond_t resource_ready;
//The philosopher thread identifiers 
pthread_t philo[NUM];
void *philosopher (void *num); 
void get_chopsticks (int, int, int);
void test (int);
void put_chopsticks (int, int, int);

int main (int argc, char **argv) 
{ 
    if (argc == 2)
        food = atoi (argv[1]);
    int i;   

    pthread_mutex_init (&monitor_mutex, NULL);
    pthread_cond_init (&resource_ready, NULL);

    //Create a thread for each philosopher
    for (i = 0; i < NUM; i++) 
        pthread_create (&philo[i], NULL, philosopher, (void *)i);

    //Wait for the threads to exit 
    for (i = 0; i < NUM; i++) 
        pthread_join (philo[i], NULL);
    return 0; 
}
void *philosopher (void *num) 
{ 
    int id; 
    int i, left_chopstick, right_chopstick, f; 

    id = (int)num; //This is the philosopher's id

    state[id] = THINKING;
    printf ("Philosopher %d is thinking.\n", id);

    //Identify the philosopher's right and left chopstick 
    right_chopstick = id; 
    left_chopstick = (id + 1)%NUM; 

    //While there is still food on the table, the loop goes on  
    while (food > 0) 
    {
        //Get the chopstick
        get_chopsticks (id, left_chopstick, right_chopstick);
        sleep(1);       
    }
    return (NULL); 
}
void get_chopsticks (int phil, int c1, int c2) 
{
    //Lock monitor variable
    pthread_mutex_lock (&monitor_mutex);    
    state[phil] = monitor;//state[phil] = HUNGRY
    test(phil);
    if (state[phil] != EATING)
    {
        pthread_cond_wait (&resource_ready, &monitor_mutex);
        printf ("Philosopher %d is now eating\n", phil);
        food--; //1 food is eaten
        if (food == 0)
        {
                 printf ("There is no more food on the table. Program exit\n");
                 pthread_mutex_destroy(&monitor_mutex);
                 pthread_cond_destroy(&resource_ready);
                 exit(1);
            }
        printf ("There are/is %d food(s) left\n", food);
        put_chopsticks (phil, c1, c2);
        sleep(1);       
    }
    //Unlock monitor variable   
    pthread_mutex_unlock (&monitor_mutex); 
}

void test (int phil)
{
    //If the philosopher is hungry and the nearest 2 are not eating, he then eats.
    if ((state[(phil+4)%NUM] != EATING)&& (state[phil] == HUNGRY))
    {
        state[phil] = EATING;
        pthread_cond_signal (&resource_ready);
    }
}
void put_chopsticks (int phil, int c1, int c2) 
{
    state[phil] = THINKING;
    //Check the 2 nearest philosophers to see if they are eating
    test ((phil+4)%NUM);
    test ((phil+1)%NUM);
}