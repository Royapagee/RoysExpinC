#include <stdio.h>

void inputScores(int scores[], int n);
void sortScores(int scores[], int n);
float calculateAverage(int scores[], int n);
void scorerange(int scores[], int s, int a, int b, int c, int d);
int max(int, int);
int min(int, int);

int main()
{
	char OP;
	int i,scores,n;
	printf("Please select function (A: Input Scores and Sort, B: Avarage, C: Max/Min , D: ScoreRange): ");
	scanf("%c", &OP);
	
	switch(OP)
	{
	  case'A': {
	  	int scores[10];
	    int n = 10;
	    printf("Please enter 10 scores:\n");
	    inputScores(scores,n);
		sortScores(scores, n);
	    printf("Sorted scores: ");
	    for(int i=0; i<n; i++)
		{
	        printf("%d ", scores[i]);
	    }
	    printf("\n");
	  }
	  
	  case 'B':{
	    float avg = calculateAverage(scores, n);
	    printf("Average: %.2f\n", avg);
	    break;
	  }
	  
	  case'C': {
		int a[10],i,m,n;
		for(i=0;i<10;i++){
			scanf("%d",&a[i]);
		}
		m=a[0];
		n=a[0];
		for(i=1;i<10;i++){
			m=max(m,a[i]);
			n=min(n,a[i]);
		}
		printf("Max: %d\nMin: %d\n",m,n);
		break;
	  }
	    
	  case'D':{
	        for(i = 0; i < 10; i++)
	        {
	            scorerange(scores[i], &s, &a, &b, &c, &d);
	        }
	        printf("\nStatistics:\n");
	        printf("Excellent (90-100): %d people\n", s);
	        printf("Good (80-89): %d people\n", a);
	        printf("Average (70-79): %d people\n", b);
	        printf("Pass (60-69): %d people\n", c);
	        printf("Fail (0-59): %d people\n", d);
			break;
	    }
	}
	return 0;
}
void inputScores(int scores[], int n) {
    for (int i = 0; i < n; i++)
	{
        scanf("%d", &scores[i]);
    }
}

void sortScores(int scores[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (scores[j] > scores[j + 1]) { 
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp; 
            }
        }
    }
}

float calculateAverage(int scores[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return sum / n;
}
int max(int x,int y)
{
	int m;
	m=x>y?x:y;
		return(m);
}
int min(int a,int b)
{
	int n;
	n=a<b?a:b;
	return(n);
}
void scorerange(int score, int *s, int *a, int *b, int *c, int *d)
{
    int range;
    range = score / 10;
    switch (range)
    {
    case 1: case 2: case 3: case 4: case 5:(*d)++;break;
    case 6:(*c)++;break;
    case 7:(*b)++;break;
    case 8:(*a)++;break;
    case 9: case 10:(*s)++;break;
    }
}
