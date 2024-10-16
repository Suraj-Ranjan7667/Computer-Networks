#include <stdio.h>
int main()
{
    int w, f, i, frames[50];
    printf("Enter window size: ");
    scanf("%d", &w);
    printf("Enter number of frames to transmit: ");
    scanf("%d", &f);
    printf("Enter %d frames: ", f);
    for (i = 0; i < f; i++)
        scanf("%d", &frames[i]);
    printf("\nSending frames using sliding window protocol:\n");
    for (i = 0; i < f; i++)
    {
        printf("%d ", frames[i]);
        if ((i + 1) % w == 0 || i == f - 1)
        {
            printf("\nAcknowledgement received for above frames\n");
        }
    }
    return 0;
}
