#include <stdio.h>
#include <ctype.h>

int main(){

        int questioncount,score=0;
        char guess;

        char questions[][1000] =  {
                         "\n1) If yesterday is history and tomorrow is mystery, then what is today?\n",
                         "\n2) How do the wheels of the bus go?\n",
                         "\n3) Fill in the blank. Bandhar kya jane ___________ ka swadh.\n",
                         "\n4) Which planet has the most number of rings around it ?\n",
                         "\n5) What was was before it was was?\n",
                         "\n6) Is the Earth Flat?\n",
                         "\n7) Which planet has the most number of moons?\n"
                        };
        
        char options[][1000] = {"\nA. Gift\nB. Today\nC. tomorrow\nD. Yesterday\n",
                                "\nA. Round and Round\nB. Left and Right\nC. Up and down\nD. In and out\n",
                                "\nA. Ilaichi \nB. Adhrak\nC. Kele\nD. Aam\n",
                                "\nA. Earth\nB. Venus\nC. Pluto\nD. Saturn\n",
                                "\nA. Be\nB. Will be\nC. Is\nD. Has\n",
                                "\nA. Yes\nB. No\nC. Might be\nD. Might not be\n",
                                "\nA. Jupiter\nB. Saturn\nC. Earth\nD. Venus\n"                              
                                };
                        
        char answerkey[10] = {'A','A','B','D','C','A','B'};

        questioncount = sizeof(questions) / sizeof(questions[0]);

        printf("***** ITS QUIZ TIME *****\n");
        
        for(int i=0;i<questioncount;i++){
                printf("%s",questions[i]);
                printf("%s",options[i]);
                printf("\nEnter your answer: ");
                scanf(" %c",&guess);
                guess = toupper(guess);
                if(guess == answerkey[i]){
                        printf("Correct Answer!\n");
                        score++;
                }
                else{
                        printf("Wrong Answer!\n");
                }

        }
        printf("\nYou scored %d/%d",score,questioncount);
        
}