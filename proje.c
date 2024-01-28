#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>


void mainmenu(){
     int x;
     x=0;
     //system("color f0");
     printf("[0] quit\n");
     printf("[1] calender\n");
     printf("[2] age\n");
     printf("[3] conversion\n");
     printf("----------------------------------\n");
     printf("Select Opnion: ");
     scanf("%d", &x);
     system("cls");
     while(x==0){
       printf("Bye!");
     }
     if(x==1){
       farei(0, 0);
     }
     else if(x==2){
       age();
     }
     else if(x==3){
       tabdil_be_rooz();
     }
     else if(x>3){
       printf("Invalid input!\n");
       printf("----------------------------------\n");
       mainmenu();
     }
}


////calender
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int farei(int year, int y, int month){
     printf("[0] Back to menu\n");
     printf("[1] for next month\n");
     printf("----------------------------------\n");

        printf("Enter year: ");
        scanf("%d", &year);
        if(year==0){
        system("cls");
        printf("back to menu!\n");
        printf("----------------------------------\n");
        mainmenu();
        }
        if(year == 1){
            month+=1;
            if(month>12){
                y++;
                month-=12;
            }
            rooze(y, month);
        }
        if(year>0){
           printf("enter month: ");
           scanf("%d", &month);
        }
        while(month>12){
           printf("please enter month again: ");
           scanf("%d", &month);
        }

        system("cls");
        rooze( year, month);
}

void rooze(int year,int month){
     int rooz, y=1206;
     rooz=year-1206;
     while(y<year){
     if(y%33==1 || y%33==5 || y%33==9 ||
     y%33==13 || y%33==17 || y%33==22 ||
     y%33==26 || y%33==30){
     rooz++;
     }
     y++;
     }
     rooz+=5;

     // روز های ماه
     if(month<=6){
        rooz = rooz + (month-1)*31;
     }
     else if(month>6){
        rooz = rooz + (month-7)*30 + 186;
     }
     rooz%=7;

         if(month==1){printf("     Farvardin\n");neshan(rooz,month,y,year);}

         else if(month==2) {printf("    Ordibehesht\n");neshan(rooz,month,y,year);}

         else if(month==3) {printf("      Kordad\n");neshan(rooz,month,y,year);}

         else if(month==4) {printf("        Tir\n");neshan(rooz,month,y,year);}

         else if(month==5) {printf("      Mordad\n");neshan(rooz,month,y,year);}

         else if(month==6) {printf("     Shahrivar\n");neshan(rooz,month,y,year);}

         else if(month==7) {printf("      Meher\n");neshan(rooz,month,y,year);}

         else if(month==8) {printf("       Aban\n");neshan(rooz,month,y,year);}

         else if(month==9) {printf("        Azar\n");neshan(rooz,month,y,year);}

         else if(month==10) {printf("        Day\n");neshan(rooz,month,y,year);}

         else if(month==11) {printf("      Bahman\n");neshan(rooz,month,y,year);}

         else if(month==12) {printf("      Esfand\n");neshan(rooz,month,y,year);}

}



void neshan(int rooz, int month, int year, int y2){
    int i, j=0, x=0, y, a, mande, fasele;
    a=3*(rooz);
    char r[31];
    // روز های هفته
     printf("Sh Ye Do Se Ch Pa Jo\n");
     while(0<=a){
        printf(" ");
        a--;
     }

        fasele=0;
        //ارزش دهی
         for (i = 0 ; i < 31; i++) {
            r[i]=i+1;
            x++;
            if(x==31){
              break;
            }
         }
        mande=7-rooz;
        i=0;
        //printf("%d %d", mande, rooz);
         while(mande>0){
              printf("%d", r[i]);
              printf("  ");
              mande--;
              i++;
         }
        printf("\n");
        y=31-mande;
        for(j=0;j<y;j++){
           printf("%d", r[i]);
           i++;
            if(r[i]<=10){
                printf("  ");
            }
           else if(r[i]>=10){
                printf(" ");
            }
           if(i==29 && month==12){
                if(year%33==1 || year%33==5 || year%33==9 || year%33==13 || year%33==17 || year%33==22 || year%33==26 || year%33==30){
                   fasele++;
                   if(fasele%7==0){
                      printf("\n");
                   }
                   printf("30");
                   break;
                }
                if(year%33!=1 || year%33!=5 || year%33!=9 || year%33!=13 || year%33!=17 || year%33!=22 || year%33!=26 || year%33!=30){
                   break;
                }
           }
           if(i==30 && month<=11 && month>6){
             break;
           }
           if(i==31 && month<=6){
             break;
           }
           fasele++;
           if(fasele%7==0){
                printf("\n");
           }
        }

        printf("\n\n----------------------------------\n");
        farei( year, y2, month);
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// calender finish

//// Age
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void age(){
    int year, month, day, yf, mf, df;
    printf("[0] Back to menu\n");
    printf("----------------------------------\n");
    printf("please enter persent year month day: ");
    scanf("%d", &yf);
    if(yf==0){
        system("cls");
        printf("back to menu!\n");
        printf("----------------------------------\n");
        mainmenu();
    }
    scanf("%d", &mf);
    scanf("%d", &df);
    while(mf>12){
        printf("please enter month again: ");
        scanf("%d", &mf);
    }
    while(df>31){
        printf("please enter day again: ");
        scanf("%d", &df);
    }
    printf("please enter your age year month day: ");
    scanf("%d", &year);
    scanf("%d", &month);
    scanf("%d", &day);
    while(month>12){
        printf("please enter month again: ");
        scanf("%d", &month);
    }
    while(day>31){
        printf("please enter day again: ");
        scanf("%d", &day);
    }
    yf=yf-year;
    mf=mf-month;
    if(mf<0){
        mf+=12;
        yf--;
    }
    df=df-day;
    if(df<0){
        if(month<=6){
            df+=31;
            mf-=1;
        }
        else if(month<=11){
            df+=30;
            mf-=1;
        }
        else if(month==12){
                if(year%33==1 || year%33==5 || year%33==9 || year%33==13 || year%33==17 || year%33==22 || year%33==26 || year%33==30){
                   df+=30;
                   mf-=1;
                }
                if(year%33!=1 || year%33!=5 || year%33!=9 || year%33!=13 || year%33!=17 || year%33!=22 || year%33!=26 || year%33!=30){
                   df+=29;
                   mf-=1;
                }
        }
    }
    system("cls");
    printf("year:%d month:%d day:%d\n", yf, mf, df);
    chroozi( year, month, day);
}


void chroozi(int year, int month, int day){
     int rooz, y=1206;
     rooz=year-1206;
     while(y<year){
     if(y%33==1 || y%33==5 || y%33==9 ||
     y%33==13 || y%33==17 || y%33==22 ||
     y%33==26 || y%33==30){
     rooz++;
     }
     y++;
     }
     rooz+=6;

     // روز های ماه
     if(month<=6){
        rooz = rooz + (month-1)*31;
     }
     else if(month>6){
        rooz = rooz + (month-7)*30 + 186;
     }

     rooz%=7;
     printf("your birthday is:");

         if(rooz==0){printf("Shanbe");}

         else if(rooz==1) {printf("Yekshanbe");}

         else if(rooz==2) {printf("Doshanbe");}

         else if(rooz==3) {printf("Seshanbe");}

         else if(rooz==4) {printf("Chaharshanbe");}

         else if(rooz==5) {printf("Panjshanbe");}

         else if(rooz==6) {printf("Jome");}
         printf("\n----------------------------------\n");

         tabdil_be_milladi(year, month, day);
         mainmenu();

}




//// conversion
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void tabdil_be_rooz(){
    int year, month, day, rooz;
    printf("please enter year month day: ");
    scanf("%d", &year);
    scanf("%d", &month);
    scanf("%d", &day);
    while(month>12){
        printf("please enter month again: ");
        scanf("%d", &month);
    }
    while(day>31){
        printf("please enter day again: ");
        scanf("%d", &day);
    }
    tabdil_be_milladi(year,month,day);

}


void tabdil_be_milladi(int year, int month, int day){
    int x=0, m=0, rooz, r, y;
    if(month<=6){
        rooz= day + (month-1)*31;
    }
    else if(month>6 && month<12){
        rooz= day + (month-7)*30 + 186;
    }
    else if(month==12){
        rooz= day + 336;
    }
    y=year;
    r=rooz;
    y+=621;
    r+=79;
    if(year%33==1 || year%33==5 || year%33==9 ||year%33==13 || year%33==17 || year%33==22 ||year%33==26 || year%33==30){
      if(r>366){
        r-=366;
        y++;
      }
    }
    else if(r>365){
        r-=365;
        y++;
    }

    x=r/31;


    if(year<131){
        r--;
    }

    if(x==0){
        m=1;
        day=r;
    }
    else if(x==1){
        m=2;
        day=r-31;
    }
    else if(x==2){
        m=3;
        day=r-59;
    }
    else if(x==3){
        m=4;
        day=r-90;
    }
    else if(x==4){
        m=5;
        day=r-120;
    }
    else if(x==5){
        m=6;
        day=r-151;
    }
    else if(x==6){
        m=7;
        day=r-181;
    }
    else if(x==7){
        m=8;
        day=r-212;
    }
    else if(x==8){
        m=9;
        day=r-243;
    }
    else if(x==9){
        m=10;
        day=r-273;
    }
    else if(x==10){
        m=11;
        day=r-304;
    }
    else if(x==11){
        m=12;
        day=r-334;
    }



    printf("shamsi => milladi = %d\/%d\/%d", y, m, day);
    tabdil_be_ghamari(rooz,year);
}


void tabdil_be_ghamari(long long int rooz, int year){
    int x=0, m=0, day=0, y=1206;
    long long int  b=35436708, r;
    float j=0, l=0;
    rooz = rooz + (year - 1206)*365;
    while(y<year){
         if(y%33==1 || y%33==5 || y%33==9 || y%33==13 || y%33==17 || y%33==22 ||y%33==26 || y%33==30){
           rooz++;
         }
         y++;
    }
    r=rooz;
    r--;
    r*=100000;
    j = floor((float)r/b) + 1242;
    l = floor((float)(r%b));
    l/=floor(100000);
    l+=230;

    if(l>354){
        l-=354;
        j++;
    }

    if(1<=l && l<31){
        m=1;
        day=l;
    }
    else if(31<=l && l<60){
        m=2;
        day=l-30;
    }
    else if(60<=l && l<90){
        m=3;
        day=l-59;
    }
    else if(90<=l && l<119){
        m=4;
        day=l-89;
    }
    else if(119<=l && l<149){
        m=5;
        day=l-118;
    }
    else if(149<=l && l<178){
        m=6;
        day=l-148;
    }
    else if(178<=l && l<208){
        m=7;
        day=l-177;
    }
    else if(208<=l && l<237){
        m=8;
        day=l-207;
    }
    else if(237<=l && l<267){
        m=9;
        day=l-236;
    }
    else if(267<=l && l<296){
        m=10;
        day=l-266;
    }
    else if(296<=l && l<326){
        m=11;
        day=l-295;
    }
    else if(326<=l && l<=355){
        m=12;
        day=l-325;
    }



    printf("\nshamsi => ghamari = %.0f\/%d\/%d", j, m, day);
    printf("\n----------------------------------\n");
    mainmenu();
}

int main(){
    mainmenu();
}
