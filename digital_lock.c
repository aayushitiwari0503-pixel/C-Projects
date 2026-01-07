#include<stdio.h>
#include<time.h>
void fill_time(char []);
void fill_time(char buffer[]){
     time_t raw_time;
    struct tim*current_time;
    char buffer[50];

    time(&raw_time);
    current_time=localtime(&raw_time);
    strftime(buffer,sizeof(buffer),"%I:%M:%S %p",current_time);

}



int main(){
    char time[50];
    fill_time(time);
    printf("Current Time ;%s",time);
  
    
    
    return 0;
}