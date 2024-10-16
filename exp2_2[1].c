#include <stdio.h>
int main()
{
    int w, sent = 0, ack, i;
    printf("enter window size\n");
    scanf("%d", &w);
    while (1)
    {
        for (i = 0; i < w; i++)
        {
            printf("Frame %d has been transmitted.\n", sent);
            sent++;
            if (sent == w)
                break;
        }
        printf("\nPlease enter the last Acknowledgement received.\n");
        scanf("%d", &ack);
        if (ack == w)
            break;
        else
            sent = ack;
    }
    return 0;
}
