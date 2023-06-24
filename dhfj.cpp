#include <stdio.h>

int main() {
    int n, i, j, temp; 
    float avg_waiting_time = 0, avg_turnaround_time = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int burst_time[n], waiting_time[n], turnaround_time[n];
    for (i = 0; i < n; i++) {
        printf("Enter burst time for process %d: ", i+1);
        scanf("%d", &burst_time[i]);
    }
    // Sort the processes by their burst time
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (burst_time[j] > burst_time[j+1]) {
                temp = burst_time[j];
                burst_time[j] = burst_time[j+1];
                burst_time[j+1] = temp;
            }
        }
    }
    // Calculate waiting and turnaround times for each process
    waiting_time[0] = 0;
    for (i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i-1] + burst_time[i-1];
    }
    for (i = 0; i < n; i++) {
        turnaround_time[i] = waiting_time[i] + burst_time[i];
        avg_waiting_time += waiting_time[i];
        avg_turnaround_time += turnaround_time[i];
    }
    // Calculate average waiting and turnaround times
    avg_waiting_time /= n;
    avg_turnaround_time /= n;
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t\t%d\t\t%d\t\t%d\n", i+1, burst_time[i], waiting_time[i], turnaround_time[i]);
    }
    printf("\nAverage Waiting Time: %f", avg_waiting_time);
    printf("\nAverage Turnaround Time: %f", avg_turnaround_time);
    return 0;
}
