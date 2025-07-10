#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int data[] = {5,4,3,2,1,3,2,1,2,1};
    int keySearch = 3;

    int index;
    for(index=0;index<10;index++){
        if(data[index]==keySearch) break;
    }

    cout<<"index = "<<index<<endl;
    return 0;
}