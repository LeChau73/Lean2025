#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

typedef struct {
    int id;
	int* arr;
}shotDt;

shotDt *shotdt;


void AllocateShot() {
    if (shotdt == NULL)
    {
        shotdt = (shotDt*)malloc(sizeof(shotDt) * 10);
    }
	memset(shotdt, 0, sizeof(shotDt) * 10);
}


void InitArray(int size)
{
    if (shotdt != NULL)
    {
        shotdt->arr = (int*)malloc(sizeof(int) * size);
    }
	memset(shotdt->arr, 0, sizeof(int) * size);
}


int main() {

    AllocateShot();
	InitArray(10);



    return 0;
}