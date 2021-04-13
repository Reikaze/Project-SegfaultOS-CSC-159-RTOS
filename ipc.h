#ifndef IPC_H
#define IPC_H

// Semaphore definitions
typedef enum {
    SEMAPHORE_UNINITIALIZED = -1,
    SEMAPHORE_INITIALIZED = 1
} sem_state_e;

typedef int sem_t;

// Message definitions
#define MSG_SIZE 256

// Message data structure
typedef struct msg_t {
    int sender;                     // Sending PID
    int time_sent;                  // Time sent
    int time_received;              // Time received
    unsigned char data[MSG_SIZE];   // Message data
} msg_t;

#endif
