// kernel.c: Basit çekirdek iskeleti (C)
#include <stdint.h>
#include <stdio.h>

// Görev yapısı ve döngüsü
typedef struct Task {
    void (*func)(void*);
    void *arg;
    struct Task *next;
} Task;

static Task* task_list = NULL;

void schedule() {
    while (1) {
        Task* t = task_list;
        while (t) {
            t->func(t->arg);
            t = t->next;
        }
    }
}

// Sistem başlatıcı
void main() {
    printf("Kernel başlatıldı!\n");
    schedule();
}
