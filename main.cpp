#include<iostream>
using namespace std;

#define BLOCKS 4096u
#define N_BLOCKS 64
#define MAX_FILES 16

struct Entry
{
    char Name[20];
    uintptr_t Start;
    uintptr_t Size;
    uintptr_t Used;
};

static FILE *disk;
static Entry dir[MAX_FILES];

int main() {


}