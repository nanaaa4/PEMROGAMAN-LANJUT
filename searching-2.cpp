#include <iostream>

using namespace std;

int main(){
    int data[] = {4,3,6,1,7,8,9,2,5,0};
    int dataYangDicari = 7;

    int i = 0;
    for ( i = 0; i < 10; i++)
    {
        if (data[i] == dataYangDicari)
        {
            break;
        }
    }

    cout<<"Index data yang dicari: "<<i<<endl;
    
}