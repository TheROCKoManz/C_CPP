#include <iostream>
using namespace std;
void TowerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout <<"\tDisk "<<n<<"--->\tRod "<<from_rod<<"\tto\tRod "<<to_rod <<endl;
        return;
    }
    TowerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout <<"\tDisk "<<n<<"--->\tRod "<<from_rod<<"\tto\tRod "<<to_rod <<endl;
    TowerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
int main()
{
    int n;
    cout<<"\nEnter no of Disks: ";
    cin>>n;
    TowerOfHanoi(n, '1', '3', '2');
    return 0;
}
