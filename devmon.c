#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int turn=0;

struct pocket
{
    int amount;
};
struct pocket potion, superPotion, hyperPotion, maxPotion, mpPotion, atkPotion, mysteryPotion;//상처약 / 좋은 상처약 / 고급 상처약 / 풀 회복약 / mp회복약 / 공격형 물약 / 수상한 물약

struct devMon
{
    char name[20];
    int level;
    int exp;
    int max_hp;
    int max_mp;
    int hp;
    int mp;
    int atk;
    int S_atk;
};
struct devMon enemyDevmon, bossDevmon, myDevMon1, myDevMon2, myDevMon3;
//전부 enemyDevmon이었다가 1~9번으로 해당 함수에서 번호순 비니비니,버미버미,서니서니,경이경이,규니규니,정이정이,여니여니,승이승이,처리처리 로 나오고 /내 개발몬1,2,3
//[이름,레벨,경험치,최대hp,최대mp,hp,mp,공격력,특수공격력]
void printImage(int imageNum){
    FILE *heal,*atk,*atked,*potion1,*potion2,*potion3,*potion4,*potion5,*potion6,*potion7,*run,*event,*root,*levelup,*die,*victory,*init,*s_atk,*tan,*bia,*abu,*kuku;
    char line[100];
    if(imageNum==1){
        heal = fopen("밥","r");
        while(fgets(line,sizeof(line),heal)!=NULL){
            printf("%s", line);
        }
    }
    if(imageNum==2){
        atk = fopen("공격하기","r");
        while(fgets(line,sizeof(line),atk)!=NULL){
            printf("%s", line);
        }
    }
    if(imageNum==3){
        atked = fopen("공격받음","r");
        while(fgets(line,sizeof(line),atked)!=NULL){
            printf("%s", line);
        }
    }
    if(imageNum==4){
        potion1 = fopen("상처약","r");
        while(fgets(line,sizeof(line),potion1)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==5){
        potion2 = fopen("좋은_상처약","r");
        while(fgets(line,sizeof(line),potion2)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==6){
        potion3 = fopen("고급_상처약","r");
        while(fgets(line,sizeof(line),potion3)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==7){
        potion4 = fopen("풀_회복약","r");
        while(fgets(line,sizeof(line),potion4)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==8){
        potion5 = fopen("mp회복약","r");
        while(fgets(line,sizeof(line),potion5)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==9){
        potion6 = fopen("공격형_물약","r");
        while(fgets(line,sizeof(line),potion6)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==10){
        potion7 = fopen("수상한_물약","r");
        while(fgets(line,sizeof(line),potion7)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==11){
        run = fopen("도망가기","r");
        while(fgets(line,sizeof(line),run)!=NULL){
            printf("%s", line);
        }
    }
    if(imageNum==12){
        event = fopen("개발몬발견","r");
        while(fgets(line,sizeof(line),event)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==13){
        system("clear");
        root = fopen("획득","r");
        while(fgets(line,sizeof(line),root)!=NULL){
            printf("%s", line);
        }
    }
    if(imageNum==14){
        levelup = fopen("레벨업","r");
        while(fgets(line,sizeof(line),levelup)!=NULL){
            printf("%s", line);
        }
        sleep(1);
        system("clear");
    }
    if(imageNum==15){
        die = fopen("머쓱","r");
        while(fgets(line,sizeof(line),die)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==16){
        victory = fopen("승리","r");
        while(fgets(line,sizeof(line),victory)!=NULL){
            printf("%s", line);
        }
        sleep(2);
    }
    if(imageNum==17){
        init = fopen("초기","r");
        while(fgets(line,sizeof(line),init)!=NULL){
            printf("%s", line);
        }

    }
    if(imageNum==18){
        s_atk = fopen("특수공격","r");
        while(fgets(line,sizeof(line),s_atk)!=NULL){
            printf("%s", line);
        }
    }
    if(imageNum==19){
        tan = fopen("청걸탄","r");
        while(fgets(line,sizeof(line),tan)!=NULL){
            printf("%s", line);
        }
    }
    if(imageNum==20){
        bia = fopen("비아북녘","r");
        while(fgets(line,sizeof(line),bia)!=NULL){
            printf("%s", line);
        }
    }
    if(imageNum==21){
        abu = fopen("아브상문","r");
        while(fgets(line,sizeof(line),abu)!=NULL){
            printf("%s", line);
        }
    }
    if(imageNum==22){
        kuku = fopen("하복쿠크","r");
        while(fgets(line,sizeof(line),kuku)!=NULL){
            printf("%s", line);
        }
    }
}

void LevelUp(int levelUP,int monNum){
    for(int i=0; i<levelUP;i++){
        if(monNum==1){
            myDevMon1.level+=1;
            myDevMon1.max_hp+=100;
            myDevMon1.max_mp+=100;
            myDevMon1.hp+=100;
            myDevMon1.mp+=100;
            myDevMon1.atk+=100;
            myDevMon1.S_atk+=100;
            system("clear");
            printf("%s의 레벨이 올랐다!\n",myDevMon1.name);
            printImage(14);
        }
        if(monNum==2){
            myDevMon2.level+=1;
            myDevMon2.max_hp+=100;
            myDevMon2.max_mp+=100;
            myDevMon2.hp+=100;
            myDevMon2.mp+=100;
            myDevMon2.atk+=100;
            myDevMon2.S_atk+=100;
            system("clear");
            printf("%s의 레벨이 올랐다!\n",myDevMon2.name);
            printImage(14);
        }
        if(monNum==3){
            myDevMon3.level+=1;
            myDevMon3.max_hp+=100;
            myDevMon3.max_mp+=100;
            myDevMon3.hp+=100;
            myDevMon3.mp+=100;
            myDevMon3.atk+=100;
            myDevMon3.S_atk+=100;
            system("clear");
            printf("%s의 레벨이 올랐다!\n",myDevMon3.name);            
            printImage(14);
        }
    }
}

void isLevelUp(){
    if(myDevMon1.exp/100>0){
        LevelUp(myDevMon1.exp/100,1);
        myDevMon1.exp = myDevMon1.exp%100;
    }
    if(myDevMon2.level!=0){
        if(myDevMon2.exp/100>0){
            LevelUp(myDevMon2.exp/100,2);
            myDevMon2.exp = myDevMon2.exp%100;
        }
    }
    if(myDevMon3.level!=0){
        if(myDevMon3.exp/100>0){
            LevelUp(myDevMon3.exp/100,3);
            myDevMon3.exp = myDevMon3.exp%100;
        }
    }
}

void selectTarget(char *enemyName,int enemyDevmonATK){
    int enemyTarget;
    srand(time(NULL));

    if(myDevMon2.level==0){//2가 없으면,3도 없다
        if(myDevMon1.hp>0){
            myDevMon1.hp -= enemyDevmonATK;
            if(myDevMon1.hp<=0){
                myDevMon1.hp=0;
            }
            printImage(3);
            printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon1.name,myDevMon1.name,enemyDevmonATK);
            sleep(1);
            system("clear");
            return;
        }
    }

    if(myDevMon2.level!=0&&myDevMon3.level==0){//2가 있는데,3이 없으면
        if(myDevMon2.hp>0){//2가 살아있으면
        
            enemyTarget = rand()%2;//2개중 택1인데
            if(myDevMon1.hp<=0){//1이 죽어있으면 이러고 끝
                myDevMon2.hp -= enemyDevmonATK;
                if(myDevMon2.hp<=0){
                    myDevMon2.hp=0;
                }
                printImage(3);
                printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon1.name,myDevMon2.name,enemyDevmonATK);
                sleep(1);
                system("clear");
                return;
            }
            else{//1이 살아있으면
                if(enemyTarget==0){
                    myDevMon1.hp -= enemyDevmonATK;
                    if(myDevMon1.hp<=0){
                        myDevMon1.hp=0;
                    }
                    printImage(3);
                    printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon1.name,myDevMon1.name,enemyDevmonATK);
                    sleep(1);
                    system("clear");
                    return;
                }
                if(enemyTarget==1){
                    myDevMon2.hp -= enemyDevmonATK;
                    if(myDevMon2.hp<=0){
                        myDevMon2.hp=0;
                    }
                    printImage(3);
                    printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon2.name,myDevMon2.name,enemyDevmonATK);
                    sleep(1);
                    system("clear");
                    return;
                }
            }
        }
        else{//2가 있는데 주거써!
            if(myDevMon1.hp>0){
                myDevMon1.hp -= enemyDevmonATK;
                if(myDevMon1.hp<=0){
                    myDevMon1.hp=0;
                }
                printImage(3);
                printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon1.name,myDevMon1.name,enemyDevmonATK);
                sleep(1);
                system("clear");
                return;
            }
        }
    }
    if(myDevMon2.level!=0&&myDevMon3.level!=0){//2도 있고,3도 있어
        if(myDevMon3.hp>0){
            enemyTarget = rand()%3;
            if(myDevMon2.hp<=0&&myDevMon1.hp<=0){//근데 둘다 죽어이써
                myDevMon3.hp -= enemyDevmonATK;
                if(myDevMon3.hp<=0){
                    myDevMon3.hp=0;
                }
                printImage(3);
                printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon3.name,myDevMon3.name,enemyDevmonATK);
                sleep(1);
                system("clear");
                return;
            }
            else if(myDevMon2.hp>0&&myDevMon1.hp<=0){//2는 살아있어
                enemyTarget = rand()%2;
                if(enemyTarget==0){
                    myDevMon2.hp -= enemyDevmonATK;
                    if(myDevMon2.hp<=0){
                        myDevMon2.hp=0;
                    }
                    printImage(3);
                    printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon2.name,myDevMon2.name,enemyDevmonATK);
                    sleep(1);
                    system("clear");
                    return;
                }
                if(enemyTarget==1){
                    myDevMon3.hp -= enemyDevmonATK;
                    if(myDevMon3.hp<=0){
                        myDevMon3.hp=0;
                    }
                    printImage(3);
                    printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon3.name,myDevMon3.name,enemyDevmonATK);
                    sleep(1);
                    system("clear");
                    return;
                }
            }
            else if(myDevMon2.hp<=0&&myDevMon1.hp>0){//1은 살아있어
                enemyTarget = rand()%2;
                if(enemyTarget==0){
                    myDevMon1.hp -= enemyDevmonATK;
                    if(myDevMon1.hp<=0){
                        myDevMon1.hp=0;
                    }
                    printImage(3);
                    printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon1.name,myDevMon1.name,enemyDevmonATK);
                    sleep(1);
                    system("clear");
                    return;
                }
                if(enemyTarget==1){
                    myDevMon3.hp -= enemyDevmonATK;
                    if(myDevMon3.hp<=0){
                        myDevMon3.hp=0;
                    }
                    printImage(3);
                    printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon3.name,myDevMon3.name,enemyDevmonATK);
                    sleep(1);
                    system("clear");
                    return;
                }
            }
            else if(myDevMon1.hp>0&&myDevMon2.hp>0){//셋다 살아있어
                if(enemyTarget==0){
                    myDevMon1.hp -= enemyDevmonATK;
                    if(myDevMon1.hp<=0){
                        myDevMon1.hp=0;
                    }
                    printImage(3);
                    printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon1.name,myDevMon1.name,enemyDevmonATK);
                    sleep(1);
                    system("clear");
                    return;
                }
                if(enemyTarget==1){
                    myDevMon2.hp -= enemyDevmonATK;
                    if(myDevMon2.hp<=0){
                        myDevMon2.hp=0;
                    }
                    printImage(3);
                    printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon2.name,myDevMon2.name,enemyDevmonATK);
                    sleep(1);
                    system("clear");
                    return;
                }
                if(enemyTarget==2){
                    myDevMon3.hp -= enemyDevmonATK;
                    if(myDevMon3.hp<=0){
                        myDevMon3.hp=0;
                    }
                    printImage(3);
                    printf("%s가 %s에게 공격! %s는 %d의 피해를 입었다!\n",enemyName,myDevMon3.name,myDevMon3.name,enemyDevmonATK);
                    sleep(1);
                    system("clear");
                    return;
                }
            }
        }
    }
}

void useItem(int useTime){
    system("clear");
    int item;
    int mysteryRand;
    int devmonNum;
    srand(time(NULL));
    printPocket();
    printf("어떤 도구를 사용하시겠습니까?\n");
    scanf(" %d",&item);
    if(item==8){
        printf("가방이 눈에 띄어 괜히 한 번 만지작 거려봤다.\n");
        sleep(1);
        system("clear");
        return;
    }
    printf("누구에게 사용하시겠습니까?\n");
    printf("1. %s: HP:%d/%d MP:%d/%d\n",myDevMon1.name,myDevMon1.hp,myDevMon1.max_hp,myDevMon1.mp,myDevMon1.max_mp);
    if(myDevMon2.level!=0){
        printf("2. %s: HP:%d/%d MP:%d/%d\n",myDevMon2.name,myDevMon2.hp,myDevMon2.max_hp,myDevMon2.mp,myDevMon2.max_mp);
    }
    if(myDevMon3.level!=0){
        printf("3. %s: HP:%d/%d MP:%d/%d\n",myDevMon3.name,myDevMon3.hp,myDevMon3.max_hp,myDevMon3.mp,myDevMon3.max_mp);
    }
    if(useTime==2&&item==6){
        printf("4.적 %s: HP:%d/%d\n",enemyDevmon.name,enemyDevmon.hp,enemyDevmon.max_hp);
    }
    if(useTime==3&&item==6){
        printf("4.리하복 교수 %s: HP:%d/%d\n",bossDevmon.name,bossDevmon.hp,bossDevmon.max_hp);
    }
    scanf(" %d",&devmonNum);
    
    switch (item)
    {
    case 1:     //상처약
        if (potion.amount <= 0)
            printf("보유 중인 \"상처약\"이 없습니다!\n");
        else{
            printImage(4);
            potion.amount--;
            //상처약: 전체 체력의 10퍼 회복
            if(devmonNum==1){
                myDevMon1.hp += myDevMon1.max_hp*0.1;
                if(myDevMon1.hp>myDevMon1.max_hp){
                    myDevMon1.hp=myDevMon1.max_hp;
                }
                printf("\"상처약\"을 사용했습니다. %s의 체력이 10%% 회복됩니다.\n",myDevMon1.name);
            }
            else if(devmonNum==2&&myDevMon2.level!=0){
                myDevMon2.hp += myDevMon2.max_hp*0.1;
                if(myDevMon2.hp>myDevMon2.max_hp){
                    myDevMon2.hp=myDevMon2.max_hp;
                }
                printf("\"상처약\"을 사용했습니다. %s의 체력이 10%% 회복됩니다.\n",myDevMon2.name);
            }
            else if(devmonNum==3&&myDevMon3.level!=0){
                myDevMon3.hp += myDevMon3.max_hp*0.1;
                if(myDevMon3.hp>myDevMon3.max_hp){
                    myDevMon3.hp=myDevMon3.max_hp;
                }
                printf("\"상처약\"을 사용했습니다. %s의 체력이 10%% 회복됩니다.\n",myDevMon3.name);
            }
            else{
                printf("잘못된 입력!\n");
            }
        }
        break;    
    case 2:
        if (superPotion.amount <= 0)
            printf("보유 중인 \"좋은 상처약\"이 없습니다!\n");
        else{
            
            printImage(5);
            superPotion.amount--;
            //좋은 상처약: 전체 체력의 20퍼 회복
            if(devmonNum==1){
                myDevMon1.hp += myDevMon1.max_hp*0.2;
                if(myDevMon1.hp>myDevMon1.max_hp){
                    myDevMon1.hp=myDevMon1.max_hp;
                }
                printf("\"좋은 상처약\"을 사용했습니다. %s의 체력이 20%% 회복됩니다.\n",myDevMon1.name);
            }
            else if(devmonNum==2&&myDevMon2.level!=0){
                myDevMon2.hp += myDevMon2.max_hp*0.2;
                if(myDevMon2.hp>myDevMon2.max_hp){
                    myDevMon2.hp=myDevMon2.max_hp;
                }
                printf("\"좋은 상처약\"을 사용했습니다. %s의 체력이 20%% 회복됩니다.\n",myDevMon2.name);
            }
            else if(devmonNum==3&&myDevMon3.level!=0){
                myDevMon3.hp += myDevMon3.max_hp*0.2;
                if(myDevMon3.hp>myDevMon3.max_hp){
                    myDevMon3.hp=myDevMon3.max_hp;
                }
                printf("\"좋은 상처약\"을 사용했습니다. %s의 체력이 20%% 회복됩니다.\n",myDevMon3.name);
            }
            else{
                printf("잘못된 입력!\n");
            }
        }
        break; 
    case 3:
        if (hyperPotion.amount <= 0)
            printf("보유 중인 \"고급 상처약\"이 없습니다!\n");
        else{
            
            printImage(6);       
            hyperPotion.amount--;
            //고급 상처약: 전체 체력의 30퍼 회복
            if(devmonNum==1){
                myDevMon1.hp += myDevMon1.max_hp*0.3;
                if(myDevMon1.hp>myDevMon1.max_hp){
                    myDevMon1.hp=myDevMon1.max_hp;
                }
                printf("\"고급 상처약\"을 사용했습니다. %s의 체력이 30%% 회복됩니다.\n",myDevMon1.name);
            }
            else if(devmonNum==2&&myDevMon2.level!=0){
                myDevMon2.hp += myDevMon2.max_hp*0.3;
                if(myDevMon2.hp>myDevMon2.max_hp){
                    myDevMon2.hp=myDevMon2.max_hp;                    
                }
                printf("\"고급 상처약\"을 사용했습니다. %s의 체력이 30%% 회복됩니다.\n",myDevMon2.name);
            }
            else if(devmonNum==3&&myDevMon3.level!=0){
                myDevMon3.hp += myDevMon3.max_hp*0.3;
                if(myDevMon3.hp>myDevMon3.max_hp){
                    myDevMon3.hp=myDevMon3.max_hp;
                }
                printf("\"고급 상처약\"을 사용했습니다. %s의 체력이 30%% 회복됩니다.\n",myDevMon3.name);
            }
            else{
                printf("잘못된 입력!\n");
            }
        }
        break; 
    case 4:
        if (maxPotion.amount <= 0)
            printf("보유 중인 \"풀 회복약\"이 없습니다!\n");
        else{
            
            printImage(7);         
            maxPotion.amount--; 
            //풀 회복약: 풀피
            
            if(devmonNum==1){
                myDevMon1.hp = myDevMon1.max_hp;
                printf("\"풀 회복약\"을 사용했습니다. %s의 체력이 모두 회복됩니다.\n",myDevMon1.name);
            }
            else if(devmonNum==2){
                myDevMon2.hp = myDevMon2.max_hp;
                printf("\"풀 회복약\"을 사용했습니다. %s의 체력이 모두 회복됩니다.\n",myDevMon2.name);
            }
            else if(devmonNum==3){
                myDevMon3.hp = myDevMon3.max_hp;
                printf("\"풀 회복약\"을 사용했습니다. %s의 체력이 모두 회복됩니다.\n",myDevMon3.name);
            }
            else{
                printf("잘못된 입력!\n");
            }
        }
        break; 
    case 5:
        if (mpPotion.amount <= 0)
            printf("보유 중인 \"mp 회복약\"이 없습니다!\n");
        else{
            
            printImage(8);
            mpPotion.amount--;
            //mp 회복약: mp 20퍼 회복
            if(devmonNum==1){

                myDevMon1.mp += myDevMon1.max_mp*0.2;
                if(myDevMon1.mp>myDevMon1.max_mp){
                    myDevMon1.mp=myDevMon1.max_mp;
                }
                printf("\"mp 회복약\"을 사용했습니다. %s의 mp가 20%% 회복됩니다.\n",myDevMon1.name);
            }
            else if(devmonNum==2){
                myDevMon2.mp += myDevMon2.max_mp*0.2;
                if(myDevMon2.mp>myDevMon2.max_mp){
                    myDevMon2.mp=myDevMon2.max_mp;
                }
                printf("\"mp 회복약\"을 사용했습니다. %s의 mp가 20%% 회복됩니다.\n",myDevMon2.name);
            }
            else if(devmonNum==3){
                myDevMon3.mp += myDevMon3.max_mp*0.2;
                if(myDevMon3.mp>myDevMon3.max_mp){
                    myDevMon3.mp=myDevMon3.max_mp;
                }
                printf("\"mp 회복약\"을 사용했습니다. %s의 mp가 20%% 회복됩니다.\n",myDevMon3.name);
            }
            else{
                printf("잘못된 입력!\n");
            }            
        }
        break; 
    case 6:
        if (atkPotion.amount <= 0)
            printf("보유 중인 \"공격형 물약\"이 없습니다!\n");            
        else{
            printf("\"공격형 물약\"을 사용했습니다!\n");
            printImage(9);
            if(devmonNum==1){
                int tmpDMG;
                tmpDMG = myDevMon1.max_hp*0.2;
                myDevMon1.hp-=tmpDMG;
                printf("이런! 아군 개발몬에게 사용하면 어떻게 해!\n");
                printf("%s의 체력이 %d만큼 감소했다!\n",myDevMon1.name,tmpDMG);
                if(myDevMon1.hp<=0){
                    myDevMon1.hp=0;
                }
            }
            else if(devmonNum==2){
                int tmpDMG;
                tmpDMG = myDevMon2.max_hp*0.2;
                myDevMon2.hp -= tmpDMG;
                printf("이런! 아군 개발몬에게 사용하면 어떻게 해!\n");
                printf("%s의 체력이 %d만큼 감소했다!\n",myDevMon2.name,tmpDMG);
                if(myDevMon2.hp<=0){
                    myDevMon2.hp=0;
                }
            }
            else if(devmonNum==3){
                int tmpDMG;
                tmpDMG=myDevMon3.max_hp*0.2;
                myDevMon3.hp -= tmpDMG;
                printf("이런! 아군 개발몬에게 사용하면 어떻게 해!\n");
                printf("%s의 체력이 %d만큼 감소했다!\n",myDevMon3.name,tmpDMG);
                if(myDevMon3.hp<=0){
                    myDevMon3.hp=0;
                }
            }
            else if(devmonNum==4){
                int tmpDMG;
                tmpDMG = enemyDevmon.max_hp*0.2;
                enemyDevmon.hp = tmpDMG;
                printf("%s의 체력이 %d만큼 감소했다!\n",enemyDevmon.name,tmpDMG);
                if(enemyDevmon.hp<=0){
                    enemyDevmon.hp=0;
                }
            }
            else if(devmonNum==5){
                bossDevmon.hp -= 1000;
                printf("리하복 교수의 체력이 1000만큼 감소했다!\n");
                if(bossDevmon.hp<=0){
                    bossDevmon.hp=0;
                }
            }
            else{
                printf("잘못된 입력!\n");
            }            
            atkPotion.amount--;
            break;
        }
    case 7:
        if (atkPotion.amount <= 0)
            printf("보유 중인 \"수상한 물약\"이 없습니다!\n");
        else{
            printf("\"수상한 물약\"을 사용했습니다.\n");
            printImage(10); 
            mysteryRand=rand()%100;
            if(mysteryRand<30){
                
                if(devmonNum==1){
                    myDevMon1.hp = myDevMon1.max_hp;
                    printf("%s가 체력을 회복한 것 같다!\n",myDevMon1.name);
                }
                else if(devmonNum==2){
                    myDevMon2.hp = myDevMon2.max_hp;
                    printf("%s가 체력을 회복한 것 같다!\n",myDevMon2.name);
                }
                else if(devmonNum==3){
                    myDevMon3.hp = myDevMon3.max_hp;
                    printf("%s가 체력을 회복한 것 같다!\n",myDevMon3.name);
                }
                else{
                    printf("잘못된 입력!\n");
                }
            }
            else{
                
                if(devmonNum==1){
                    myDevMon1.hp -= myDevMon1.max_hp*0.3;
                    if(myDevMon1.hp<=0){
                        myDevMon1.hp=1;
                    }
                    printf("이런! %s의 체력이 떨어진 것 같다\n!",myDevMon1.name);
                }
                else if(devmonNum==2){
                    myDevMon2.hp -= myDevMon2.max_hp*0.3;
                    if(myDevMon2.hp<=0){
                        myDevMon2.hp=1;
                    }
                    printf("이런! %s의 체력이 떨어진 것 같다\n!",myDevMon2.name);
                }
                else if(devmonNum==3){
                    myDevMon3.hp -= myDevMon3.max_hp*0.3;
                    if(myDevMon3.hp<=0){
                        myDevMon3.hp=1;
                    }
                    printf("이런! %s의 체력이 떨어진 것 같다\n!",myDevMon3.name);
                }
                else{
                    printf("잘못된 입력!\n");
                }
            }
            atkPotion.amount--;
        }
        break; 
    }

    sleep(2);
    if(useTime==1){
        system("clear");
    }
}

int bossDie(){
    if(bossDevmon.hp<=0){
        system("clear");
        printf("리하복 교수를 무찔렀다!");
        printf("나 하나의 희생으로 이런 수준의 개발자를 만들었다면... 그걸로 된거야... 끄덕... \n");
        sleep(2);
        system("clear");
        printf("리하복 교수는 만족한 표정으로 하늘로 승천했다.\n");
        sleep(2);
        system("clear");
        printf("이후 리하복 교수를 성불시켰다는 소문이 퍼지자 이곳저곳에서 취업 제의가 들어왔고\n");
        sleep(1);
        printf("나는 수료증과 함께 개발원을 탈출했다...");
        sleep(1);
        printf("Thanks to play\n");
        sleep(1);
        return 1;
    }
    return 0;
}

void bossBattle(){
    system("clear");
    bossDevmon.max_hp=50000;
    bossDevmon.hp=bossDevmon.max_hp;
    int bossSATK;
    int bossHeal;
    int bossDMG;
    int choiceAction1=0,choiceAction2=0,choiceAction3=0;
    printImage(22);
    srand(time(NULL));
    printf("취업을 하고 싶다면 덤벼 보거라!\n");
    sleep(1);
    system("clear");
    printf("리하복의 일침이 가해졌다! 그 위압감에 도망칠 수 없게 됐다!\n");
    sleep(1);
    system("clear");
    while(bossDevmon.hp>0){
        bossDMG = rand()%1924+100;
        bossSATK = rand()%10;
        if(myDevMon1.hp>0){
            printf("보스 정보\nLv:99 리하복: HP:%d/%d\n\n\n\n",bossDevmon.hp,bossDevmon.max_hp);
            printDevmon();
            printf("%s의 행동 선택\n1.공격 2.특수공격 3.도구함\n",myDevMon1.name);
            scanf(" %d",&choiceAction1);
            if(choiceAction1==1){
                bossDevmon.hp -= myDevMon1.atk;
                system("clear");
                printImage(2);
                printf("%s의 공격! 리하복 교수에게 %d의 피해를 입혔다!\n",myDevMon1.name, myDevMon1.atk);
                sleep(1);
            }
            else if(choiceAction1==2){
                if(myDevMon1.mp>=50){
                    bossDevmon.hp -= myDevMon1.S_atk;
                    myDevMon1.mp -= 50;
                    system("clear");
                    printImage(18);
                    printf("%s의 스킬 사용! 리하복 교수에게 %d의 피해를 입혔다!\n",myDevMon1.name, myDevMon1.S_atk);
                    sleep(1);
                }
                else{
                    printf("마나도 없으면서 그런 실수를 한다고? 취업해서도 제대로 못써먹겠군!\n");
                }
            }
            else if(choiceAction1==3){
                useItem(3);
            }
            else{
                printf("날 앞에 두고 그런 실수를 한다고? 가소롭군!\n");
                printf("입력을 잘못한 것 같다. 다음엔 긴장하지 말고 제대로 입력하자\n");
            }
            getchar();
        }
        if(bossDie()==1){
            return;
        }
        if(myDevMon2.level!=0){
            if(myDevMon2.hp>0){
                system("clear");
                printf("보스 정보\nLv:99 리하복: HP:%d/%d\n\n\n\n",bossDevmon.hp,bossDevmon.max_hp);
                printDevmon();
                printf("%s의 행동 선택\n1.공격 2.특수공격 3.도구함\n",myDevMon2.name);
                scanf(" %d",&choiceAction2);
                if(choiceAction2==1){
                    bossDevmon.hp -= myDevMon2.atk;
                    system("clear");
                    printImage(2);
                    printf("%s의 공격! 리하복 교수에게 %d의 피해를 입혔다!\n",myDevMon2.name, myDevMon2.atk);
                    sleep(1);
                }
                else if(choiceAction2==2){
                    if(myDevMon2.mp>=50){
                        bossDevmon.hp -= myDevMon2.S_atk;
                        myDevMon2.mp -= 50;
                        system("clear");
                        printImage(18);
                        printf("%s의 스킬 사용! 리하복 교수에게 %d의 피해를 입혔다!\n",myDevMon2.name, myDevMon2.S_atk);
                        sleep(1);
                    }
                    else{
                        printf("마나도 없으면서 그런 실수를 한다고? 취업해서도 제대로 못써먹겠군!\n");
                    }
                }
                else if(choiceAction2==3){
                    useItem(3);
                }
                else{
                    printf("날 앞에 두고 그런 실수를 한다고? 가소롭군!\n");
                    printf("입력을 잘못한 것 같다. 다음엔 긴장하지 말고 제대로 입력하자\n");
                }
                getchar();
            }
        }
        if(bossDie()==1){
            return;
        }
        if(myDevMon3.level!=0){
            if(myDevMon3.hp>0){
                system("clear");
                printf("보스 정보\nLv:99 리하복: HP:%d/%d\n\n\n\n",bossDevmon.hp,bossDevmon.max_hp);
                printDevmon();
                printf("%s의 행동 선택\n1.공격 2.특수공격 3.도구함\n",myDevMon3.name);
                scanf(" %d",&choiceAction3);
                if(choiceAction3==1){
                    bossDevmon.hp -= myDevMon3.atk;
                    system("clear");
                    printImage(2);
                    printf("%s의 공격! 리하복 교수에게 %d의 피해를 입혔다!\n",myDevMon3.name, myDevMon3.atk);
                    sleep(1);
                }
                else if(choiceAction3==2){
                    if(myDevMon3.mp>=50){
                        bossDevmon.hp -= myDevMon3.S_atk;
                        myDevMon3.mp -= 50;
                        system("clear");
                        printImage(18);
                        printf("%s의 스킬 사용! 리하복 교수에게 %d의 피해를 입혔다!\n",myDevMon3.name, myDevMon3.S_atk);
                        sleep(1);
                    }
                    else{
                        printf("마나도 없으면서 그런 실수를 한다고? 취업해서도 제대로 못써먹겠군!\n");
                    }
                }
                else if(choiceAction2==3){
                    useItem(3);
                }
                else{
                    printf("날 앞에 두고 그런 실수를 한다고? 가소롭군!\n");
                    printf("입력을 잘못한 것 같다. 다음엔 긴장하지 말고 제대로 입력하자\n");
                }
                getchar();
            }
        }
        if(bossDie()==1){
            return;
        }
        
        
        if(bossDevmon.hp<=5000&&bossDevmon.hp>0){
            bossHeal=rand()%100;
            if(bossHeal<30){
                printf("목이 좀 타니 아이스티 한 잔 하고 가자고\n");
                bossDevmon.hp+=5000;
                sleep(1);
            }
        }

        if(bossDevmon.hp>0){
            system("clear");
            printf("리하복 교수의 턴!\n");
            printf("쓸모 없는 짓은 다 했나? 이제 아름다운 코드란 걸 보여주지!\n");

            if(bossSATK==0){
                printf("리하복 교수가 광역 공격을 시전했다! 전원에게 %d의 피해!\n",bossDMG+500);
                printImage(3);
                if(myDevMon2.level==0){
                    if(myDevMon1.hp>0){
                        myDevMon1.hp -= bossDMG;
                    }
                }
                if(myDevMon2.level!=0&&myDevMon3.level==0){
                    if(myDevMon2.hp>0){
                        myDevMon2.hp -= bossDMG;
                    }
                    if(myDevMon1.hp>0){
                        myDevMon1.hp -= bossDMG;
                    }
                }
                if(myDevMon3.level!=0){
                    if(myDevMon3.hp>0){
                        myDevMon3.hp -= bossDMG;
                    }
                    if(myDevMon2.hp>0){
                        myDevMon2.hp -= bossDMG;
                    }
                    if(myDevMon1.hp>0){
                        myDevMon1.hp -= bossDMG;
                    }
                }
            }
            else{
                selectTarget(bossDevmon.name, bossDMG);
            }
            sleep(1);
            system("clear");
        }
        if(myDevMon1.hp<=0&&((myDevMon2.level!=0&&myDevMon2.hp<=0)||myDevMon2.level==0)&&((myDevMon3.hp<=0&&myDevMon3.level!=0)||myDevMon3.level==0)){
            printf("리하복 교수의 아름다운 코드를 보고 뇌가 정보를 따라가지 못했다... 눈 앞이 캄캄해졌다...\n");
            sleep(2);
            return;
        }
    }
}

void isCompletion(){
    if(turn>=900){
        system("clear");
        printf("리하복 교수 : 하... 이런 냄새나는 코드도 코드라고 쓴건가? 수료했으면 좀 더 성의를 보이라고!\n");
        sleep(1);
        system("clear");
        bossBattle();
    }
    else{
        printf("리하복 교수 : 어머나~ 귀여운 모코코 개발자는 아가야~ 지켜줘야 해~\n");
        sleep(1);
        system("clear");
    }
}

void healing(){
    system("clear");
    printImage(1);
    printf("영양사님의 특제 요리를 먹고 기운을 차렸다!\n");
    myDevMon1.hp = myDevMon1.max_hp;
    myDevMon1.mp = myDevMon1.max_mp;
    if(myDevMon2.level!=0){
        myDevMon2.hp = myDevMon2.max_hp;
        myDevMon2.mp = myDevMon2.max_mp;
    }
    if(myDevMon3.level!=0){
        myDevMon3.hp = myDevMon3.max_hp;
        myDevMon3.mp = myDevMon3.max_mp;
    }
    sleep(2);
    system("clear");
}

int isCrash(char (*arr)[25], int *pos_X, int *pos_Y,int move){//벽과 충돌 검사

    //영양사일때
    if(move==1&&arr[(*pos_Y)-1][(*pos_X)]=='h'){
        healing();
        return 1;
    }
    if(move==2&&arr[(*pos_Y)+1][(*pos_X)]=='h'){
        healing();
        return 1;
    }
    if(move==3&&arr[(*pos_Y)][(*pos_X)-1]=='h'){
        healing();
        return 1;
    }
    if(move==4&&arr[(*pos_Y)][(*pos_X)+1]=='h'){
        healing();
        return 1;
    }
    //보스일때
    if(move==1&&arr[(*pos_Y)-1][(*pos_X)]=='b'){
        isCompletion();
        return 1;
    }
    if(move==2&&arr[(*pos_Y)+1][(*pos_X)]=='b'){
        isCompletion();
        return 1;
    }
    if(move==3&&arr[(*pos_Y)][(*pos_X)-1]=='b'){
        isCompletion();
        return 1;
    }
    if(move==4&&arr[(*pos_Y)][(*pos_X)+1]=='b'){
        isCompletion();
        return 1;
    }
    if(move==1&&arr[(*pos_Y)-1][(*pos_X)]!='n'){
        return 1;
    }
    if(move==2&&arr[(*pos_Y)+1][(*pos_X)]!='n'){
        return 1;
    }
    if(move==3&&arr[(*pos_Y)][(*pos_X)-1]!='n'){
        return 1;
    }
    if(move==4&&arr[(*pos_Y)][(*pos_X)+1]!='n'){
        return 1;
    }
    else
        return 0;
}

void rootItem(){ //아이템번호 0.상처약 1.좋은 상처약 2.고급 상처약 3.풀 회복약 4.mp회복약 5.공격형 물약 6.수상한 물약
    int itemRand;
    printImage(13);
    srand(time(NULL));
    itemRand=rand()%100;
    if(itemRand==99){
        printf("신난다! 수상한 물약을 손에 넣었다!\n");
        mysteryPotion.amount++;
        sleep(1);
        system("clear");
        return;
    }
    if(itemRand>=90){
        printf("신난다! 공격형 물약을 손에 넣었다!\n");
        atkPotion.amount++;
        sleep(1);
        system("clear");
        return;
    }
    if(itemRand>=70){
        printf("신난다! mp회복약을 손에 넣었다!\n");
        mpPotion.amount++;
        sleep(1);
        system("clear");
        return;
    }
    if(itemRand>=65){
        printf("신난다! 풀 회복약을 손에 넣었다!\n");
        maxPotion.amount++;
        sleep(1);
        system("clear");
        return;
    }
    if(itemRand>=55){
        printf("신난다! 고급 상처약을 손에 넣었다!\n");
        hyperPotion.amount++;
        sleep(1);
        system("clear");
        return;
    }
    if(itemRand>=35){
        printf("신난다! 좋은 상처약을 손에 넣었다!\n");
        superPotion.amount++;
        sleep(1);
        system("clear");
        return;
    }
    if(itemRand>=0){
        printf("신난다! 상처약을 손에 넣었다!\n");
        potion.amount++;
        sleep(1);
        system("clear");
        return;
    }
}

int isClass(int pos_X, int pos_Y){
    if(pos_Y>=1&&pos_Y<=23&&(pos_X>=1&&pos_X<=5)){
        return 1;
    }
    else if(pos_Y>=1&&pos_Y<=23&&pos_X>=19&&pos_X<=23){
        return 2;
    }
    else if(pos_Y>=6&&pos_Y<=18&&pos_X>=10&&pos_X<=14){
        return 3;
    }
    else{
        return 0;
    }
}

void makeEnemy(){
    int randName,randLevel,randHP,randMP,randATK,randS_ATK;
    srand(time(NULL));
    randName=rand()%9;
    //등장 개발몬 종류 지정 번호순 비니비니,버미버미,서니서니,경이경이,규니규니,정이정이,여니여니,승이승이,처리처리
    if(randName==0){strcpy(enemyDevmon.name,"비니비니");}
    if(randName==1){strcpy(enemyDevmon.name,"버미버미");}
    if(randName==2){strcpy(enemyDevmon.name,"서니서니");}
    if(randName==3){strcpy(enemyDevmon.name,"경이경이");}
    if(randName==4){strcpy(enemyDevmon.name,"규니규니");}
    if(randName==5){strcpy(enemyDevmon.name,"정이정이");}
    if(randName==6){strcpy(enemyDevmon.name,"여니여니");}
    if(randName==7){strcpy(enemyDevmon.name,"승이승이");}
    if(randName==8){strcpy(enemyDevmon.name,"처리처리");}
    randLevel=myDevMon1.level+rand()%3-1;    randHP=myDevMon1.max_hp+rand()%500-250;    randMP=myDevMon1.max_mp+rand()%500-250;    randATK=myDevMon1.atk+rand()%100-50;    randS_ATK=myDevMon1.S_atk+rand()%200-100;
    if(randLevel<1){
        randLevel=1;
    }
    enemyDevmon.level=randLevel; enemyDevmon.max_hp=randHP; enemyDevmon.max_mp=randMP; enemyDevmon.hp=randHP; enemyDevmon.mp=randMP; enemyDevmon.atk=randATK; enemyDevmon.S_atk=randS_ATK; enemyDevmon.exp=0;
}

void RecruitEnemy(){
    if(myDevMon2.level==0){
        myDevMon2=enemyDevmon;
        myDevMon2.hp=enemyDevmon.max_hp;
    }
    else if(myDevMon3.level==0){
        myDevMon3=enemyDevmon;
        myDevMon3.hp=enemyDevmon.max_hp;
    }
}

void printDevmon(){
    printf("Lv:%d %s: HP:%d/%d MP:%d/%d 공격력:%d 특수 공격력:%d\n",myDevMon1.level,myDevMon1.name,myDevMon1.hp,myDevMon1.max_hp,myDevMon1.mp,myDevMon1.max_mp,myDevMon1.atk,myDevMon1.S_atk);
    if(myDevMon2.level!=0){
        printf("Lv:%d %s: HP:%d/%d MP:%d/%d 공격력:%d 특수 공격력:%d\n",myDevMon2.level,myDevMon2.name,myDevMon2.hp,myDevMon2.max_hp,myDevMon2.mp,myDevMon2.max_mp,myDevMon2.atk,myDevMon2.S_atk);
    }
    if(myDevMon3.level!=0){
        printf("Lv:%d %s: HP:%d/%d MP:%d/%d 공격력:%d 특수 공격력:%d\n",myDevMon3.level,myDevMon3.name,myDevMon3.hp,myDevMon3.max_hp,myDevMon3.mp,myDevMon3.max_mp,myDevMon3.atk,myDevMon3.S_atk);
    }
}

int enemyDie(){
    int isRecruit=0;
    if(enemyDevmon.hp<=0){
            system("clear");
            printf("이겼다! 경험치를 50 획득했다!\n");
            printImage(16);
            myDevMon1.exp+=50;
            if(myDevMon2.level!=0){
                myDevMon2.exp+=50;
            }
            if(myDevMon3.level!=0){
                myDevMon3.exp+=50;
            }
            isLevelUp();
            system("clear");
            if(myDevMon3.level==0){
                printf("%s를 동료로 영입할까? (동료로 영입한 개발몬은 당신과 평생 함께합니다. 신중히 선택하세요)\n",enemyDevmon.name);
                printf("1. 영입한다. 다른 키 입력: 돌아간다.");
                scanf(" %d",&isRecruit);
                if(isRecruit==1){
                    RecruitEnemy();
                }
                while(getchar() != '\n');
                system("clear");
            }
            return 1;
        }
        return 0;
}

void battle(){
    system("clear");//새 화면 띄워야 하니까
    int choiceAction1=0,choiceAction2=0,choiceAction3=0;
    int runRate;
    int enemyTarget;
    srand(time(NULL));
    makeEnemy();
    printf("야생의 %s가 나타났다!!!!\n",enemyDevmon.name);
    while (enemyDevmon.hp>0)
    {
        printf("적의 정보\nLv:%d %s: HP:%d/%d 공격력:%d 특수공격력:%d \n\n\n\n",enemyDevmon.level,enemyDevmon.name,enemyDevmon.hp,enemyDevmon.max_hp,enemyDevmon.atk,enemyDevmon.S_atk);
        printDevmon();
        if(myDevMon1.hp>0){
            printf("%s의 행동 선택\n1.공격 2.특수공격 3.도구함 4.도망\n",myDevMon1.name);
            scanf(" %d",&choiceAction1);

            if(choiceAction1==1){
                enemyDevmon.hp -= myDevMon1.atk;
                system("clear");
                printImage(2);
                printf("%s의 공격! %s에게 %d의 피해를 입혔다!\n",myDevMon1.name, enemyDevmon.name, myDevMon1.atk);
                sleep(1);
            }
            else if(choiceAction1==2&&myDevMon1.mp>=50){
                enemyDevmon.hp -= myDevMon1.S_atk;
                myDevMon1.mp -= 50;
                system("clear");
                printImage(18);
                printf("%s의 스킬 사용! %s에게 %d의 피해를 입혔다!\n",myDevMon1.name, enemyDevmon.name, myDevMon1.S_atk);
                sleep(1);
            }
            else if(choiceAction1==2&&myDevMon1.mp<50){
                system("clear");
                printf("앗! mp가 부족하다! 적 %s는 이상함을 눈치챘다!\n",enemyDevmon.name);
                sleep(1);
            }
            else if(choiceAction1==3){
                useItem(2);
            }
            else if(choiceAction1==4){
                runRate=rand()%10;
                if(runRate==0){
                    printImage(11);
                    printf("도망에 성공했다!\n");
                    sleep(2);
                    system("clear");
                    return;
                }
                else{
                    system("clear");
                    printf("도망에 실패했다!\n");
                    sleep(1);
                    system("clear");
                }
            }
            else{
                printf("잘못된 입력! 적 개발몬은 빈틈을 놓치지 않는다!\n");
            }
        while(getchar() != '\n')
            ;
        }
        if(enemyDie()==1){
            return;
        }
        if(myDevMon2.level!=0&&myDevMon2.hp>0){
            system("clear");
            printf("적의 정보\nLv:%d %s: HP:%d/%d 공격력:%d 특수공격력:%d \n\n\n\n",enemyDevmon.level,enemyDevmon.name,enemyDevmon.hp,enemyDevmon.max_hp,enemyDevmon.atk,enemyDevmon.S_atk);
            printDevmon();
            printf("%s의 행동 선택\n1.공격 2.특수공격 3.도구함 4.도망\n",myDevMon2.name);
            scanf(" %d",&choiceAction2);
            if(choiceAction2==1){
                enemyDevmon.hp -= myDevMon2.atk;
                system("clear");
                printImage(2);
                printf("%s의 공격! %s에게 %d의 피해를 입혔다!\n",myDevMon2.name, enemyDevmon.name, myDevMon2.atk);
                sleep(1);
            }
            else if(choiceAction2==2&&myDevMon2.mp>=50){
                enemyDevmon.hp -= myDevMon2.S_atk;
                myDevMon2.mp -= 50;
                system("clear");
                printImage(18);
                printf("%s의 스킬 사용! %s에게 %d의 피해를 입혔다!\n",myDevMon2.name, enemyDevmon.name, myDevMon2.S_atk);
                sleep(1);
            }
            else if(choiceAction2==2&&myDevMon2.mp<50){
                system("clear");
                printf("앗! mp가 부족하다! 적 %s는 이상함을 눈치챘다!\n",enemyDevmon.name);
                sleep(1);
            }
            else if(choiceAction2==3){
                useItem(2);
            }
            else if(choiceAction2==4){
                runRate=rand()%10;
                if(runRate==0){
                    printImage(11);
                    printf("도망에 성공했다!\n");
                    sleep(2);
                    system("clear");
                    return;
                }
                else{
                    system("clear");
                    printf("도망에 실패했다!\n");
                    sleep(1);
                    system("clear");
                }
            }
            else{
                printf("잘못된 입력! 적 개발몬은 빈틈을 놓치지 않는다!\n");
            }
            while(getchar() != '\n');
        }
        if(enemyDie()==1){
            return;
        }
        if(myDevMon3.level!=0&&myDevMon3.hp>0){
            system("clear");
            printf("적의 정보\nLv:%d %s: HP:%d/%d 공격력:%d 특수공격력:%d \n\n\n\n",enemyDevmon.level,enemyDevmon.name,enemyDevmon.hp,enemyDevmon.max_hp,enemyDevmon.atk,enemyDevmon.S_atk);
            printDevmon();
            printf("%s의 행동 선택\n1.공격 2.특수공격 3.도구함 4.도망\n",myDevMon3.name);
            scanf(" %d",&choiceAction3);
            if(choiceAction3==1){
                enemyDevmon.hp -= myDevMon3.atk;
                system("clear");
                printImage(2);    
                printf("%s의 공격! %s에게 %d의 피해를 입혔다!\n",myDevMon3.name, enemyDevmon.name, myDevMon3.atk);
                sleep(1);
            }
            else if(choiceAction3==2&&myDevMon3.mp>=50){
                enemyDevmon.hp -= myDevMon3.S_atk;
                myDevMon3.mp -= 50;
                system("clear");
                printImage(18);           
                printf("%s의 스킬 사용! %s에게 %d의 피해를 입혔다!\n",myDevMon3.name, enemyDevmon.name, myDevMon3.S_atk);
                sleep(1);
            }
            else if(choiceAction3==2&&myDevMon3.mp<50){
                system("clear");
                printf("앗! mp가 부족하다! 적 %s는 이상함을 눈치챘다!\n",enemyDevmon.name);
                sleep(1);
            }
            else if(choiceAction3==3){
                useItem(2);
            }
            else if(choiceAction3==4){
                runRate=rand()%10;
                if(runRate==0){
                    printImage(11);
                    printf("도망에 성공했다!\n");
                    sleep(2);
                    system("clear");
                    return;
                }
                else{
                    system("clear");
                    printf("도망에 실패했다!\n");
                    sleep(1);
                    system("clear");
                }
            }
            else{
                printf("잘못된 입력! 적 개발몬은 빈틈을 놓치지 않는다!\n");
            }
        while(getchar() != '\n');
        }
        if(enemyDie()==1){
            return;
        }
        sleep(1);
        system("clear");

        if(enemyDevmon.hp>0){//적이 살아있을 때
            system("clear");
            printf("적의 턴!\n");
            selectTarget(enemyDevmon.name,enemyDevmon.atk);
        }
       
        if(myDevMon1.hp<=0&&(myDevMon2.level!=0&&myDevMon2.hp<=0||myDevMon2.level==0)&&(myDevMon3.level!=0&&myDevMon3.hp<=0||myDevMon3.level==0)){
            printf("밤새 작성한 코드가 날아갔다... 눈 앞이 캄캄해졌다...\n");
            sleep(1);
            return;
        }
    }
    sleep(1);
    system("clear");
    
}

void quiz(){
    system("clear");

    int quizCount = 1;    //quizNum: 랜덤퀴즈 문제
    char answer;
    int right=0, wrong=0;
    int notDupArr[3]={0,};
    int isDup;
    int randQuiz;
    srand(time(NULL));

    while(isDup<3){
        isDup=0;
        for(int i=0;i<3;i++){
            randQuiz=rand()%5+1;
            notDupArr[i]=randQuiz;
        }
        for(int i=0;i<2;i++){
            for(int j=i+1;j<3;j++){
                if(j!=i&&notDupArr[i]!=notDupArr[j]){
                    isDup++;
                }
            }
        }
    }

    printf("지금부터 퀴즈 3문제를 낼 건데,\n퀴즈를 맞춘다면 선물을 줄 거임.\n");
    // sleep(3);
    printf("\n만약 세 문제 모두 맞춘다면 큰 선물을 주겠음.\n대신 모두 틀린다면 큰 패널티를 부여할 거임 ㅋㅅㅋ\n");
    // sleep(3);
    printf("\n자, 준비가 됐다면 엔터를 누르도록.\n");

    while(getchar()!='\n');
    system("clear");

    while(quizCount <= 3){
        int quizRight = rand()%2+1;     //1이 나왔을 땐 정답이 O, 2가 나왔을 땐 정답이 X

        printf("자! %d번째 문제다.\n", quizCount);

        //1번이 정답일 때 (O가 정답)
        if (quizRight==1)
        {
            switch (notDupArr[quizCount-1])
            {
            case 1:
                printf("북두칠성은 시계의 반대 방향으로 회전한다.\n1. O\n2. X\n답: ");
                break;
            case 2:
                printf("낙지는 심장이 3개이다.\n1. O\n2. X\n답: ");
                break;
            case 3:
                printf("개발에도 땀이 난다.\n1. O\n2. X\n답: ");
                break;
            case 4:
                printf("남자와 여자의 목소리 중 멀리 들리는 것은 여자 목소리이다.\n1. O\n2. X\n답: ");
                break;
            case 5:
                printf("빵은 순수한 우리말이다.\n1. O\n2. X\n답: ");
                break;
            }

            scanf(" %c", &answer);

            if (answer=='1')
            {
                printf("정답이다. 꽤 하는데?\n\n");
                printf("경험치 50을 얻었다.\n");
                sleep(1);
                quizCount++;
                right++;
                myDevMon1.exp+=50;
                if(myDevMon2.level!=0){
                    myDevMon2.exp+=50;
                }
                if(myDevMon3.level!=0){
                    myDevMon3.exp+=50;
                }
                system("clear");
                isLevelUp();
            }
            else if (answer=='2')
            {
                printf("몰상식한 녀석. 틀렸다!\n\n");
                sleep(1);
                system("clear");
                quizCount++;
                wrong++;
            }
            else
            {
                printf("예끼 요녀석아! 분명 1번 아니면 2번을 선택하라고 했잖아!\n");
                if (quizCount < 3)      // 2번문제까지는 경고해줌
                {
                    printf("남은 기회는 %d번이니 정신차려!\n", 3-quizCount);
                    sleep(1);
                }
                system("clear");
                quizCount++;
                wrong++;
            }             
        }

        //2번이 정답일 때 (X가 정답)
        else if(quizRight==2)
        {
            switch (notDupArr[quizCount-1])
            {
            case 1:
                printf("용은 십장생의 하나다.\n1. O\n2. X\n답: ");
                break;
            case 2:
                printf("남극에도 우편번호가 있다.\n1. O\n2. X\n답: ");
                break;
            case 3:
                printf("비행기의 블랙박스는 검은색이다.\n1. O\n2. X\n답: ");
                break;
            case 4:
                printf("로마의 수도는 로마이다.\n1. O\n2. X\n답: ");
                break;
            case 5:
                printf("셰익스피어의 희곡 햄릿의 주인공인 햄릿은 네덜란드 왕자이다.\n1. O\n2. X\n답: ");
                break;
            }

            scanf(" %c", &answer);

            if (answer=='2')
            {
                printf("정답이다. 꽤 하는데?\n\n");
                printf("경험치 50을 얻었다.\n");
                sleep(1);
                quizCount++;
                right++;
                myDevMon1.exp+=50;
                if(myDevMon2.level!=0){
                    myDevMon2.exp+=50;
                }
                if(myDevMon3.level!=0){
                    myDevMon3.exp+=50;
                }
                system("clear");
                isLevelUp();
            }
            else if (answer=='1')
            {
                printf("몰상식한 녀석. 틀렸다!\n\n");
                while(getchar() != '\n');
                sleep(1);
                system("clear");
                quizCount++;
                wrong++;
            }
            else
            {
                printf("예끼 요녀석아! 분명 1번 아니면 2번을 선택하라고 했잖아!\n");
                if (quizCount < 3)      // 2번문제까지는 경고해줌
                {
                    printf("남은 기회는 %d번이니 정신차려!\n", 3-quizCount);
                    sleep(1);                    
                }                
                system("clear");
                quizCount++;
                wrong++;
            }             
        }
    }

    if (wrong == 3)
    {
        system("clear");
        printf("떼잉... 형편없네, 아주 형편없어.\n");
        sleep(1);
        printf("\nHP가 50%% 감소했습니다.\n");
        int hp;
        hp = myDevMon1.max_hp*0.5;
        if(myDevMon1.hp>0){
            myDevMon1.hp -= hp;
            
            if(myDevMon1.hp<=0){
            myDevMon1.hp=0;
            }
        }
        
        if(myDevMon2.level!=0){
            hp=myDevMon2.max_hp*0.5;
            if(myDevMon2.hp>0){
                myDevMon2.hp -= hp;
                if(myDevMon2.hp<=0){
                    myDevMon2.hp=0;
                }
            }
        }

        if(myDevMon3.level!=0){
            hp=myDevMon3.max_hp*0.5;
            if(myDevMon3.hp>0){
                myDevMon3.hp -= hp;
                if(myDevMon3.hp<=0){
                    myDevMon3.hp=0;
                }
            }
        }
        sleep(2);
    }
    else if(right == 3)
    {
        system("clear");
        printf("너의 상식에 감탄했다. 약속한대로 큰 보상을 주도록 하마.\n\n간식을 받았습니다. 개발몬의 LV이 1만큼 추가 상승! 개발몬의 HP가 모두 회복됩니다.\n");
        sleep(2);
        LevelUp(1,1);
        myDevMon1.hp = myDevMon1.max_hp;

        if(myDevMon2.level!=0){
            LevelUp(1,2);
            myDevMon2.hp = myDevMon2.max_hp;
        }
        if(myDevMon3.level!=0){
            LevelUp(1,3);
            myDevMon3.hp = myDevMon3.max_hp;
        }
        
    }
    system("clear");
}

void eventOccur(int isClass){
    int eventBattle,eventQuiz,eventItem;
    FILE *file;
    char line[100];
    file = fopen("개발몬발견","r");

    srand(time(NULL));
    eventItem=rand()%100;
    if(eventItem>=95){
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }
        printf("어라...? 바닥에 뭔가 있다!\n");

        sleep(1);
        rootItem();
        return;
    }

    if(isClass==1){
        eventQuiz=rand()%100;
        if(eventQuiz>=80){
            printImage(19);
            printf("앗! 야생의 류청걸과 마주쳤다!\n");
            sleep(1);
            quiz();
            return;
        }
    }
    if(isClass==2){
        eventQuiz=rand()%100;
        if(eventQuiz>=80){
            printImage(20);
            printf("앗! 야생의 리북녘과 마주쳤다!\n");
            sleep(1);
            quiz();
            return;
        }
    }
    if(isClass==3){
        eventQuiz=rand()%100;
        if(eventQuiz>=80){
            printImage(21);
            printf("앗! 야생의 최하문과 마주쳤다!\n");
            sleep(1);
            quiz();
            return;
        }
    }
    eventBattle=rand()%100;
    if(eventBattle>=70){
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }
        printf("앗! 야생의 개발몬이 나타났다!\n");
        sleep(1);
        battle();
        return;
    }
}

char* move(char (*arr)[25],char moveChar, int * pos_X, int * pos_Y){
    int event;
    int crashed=1;
    system("clear");
    if(moveChar=='w'||moveChar=='W'){
        if(isCrash(arr,pos_X,pos_Y,1)==0){
            arr[(*pos_Y)][(*pos_X)]='n';
            (*pos_Y)--;
            arr[(*pos_Y)][(*pos_X)]='p';
            crashed=0;
        }
    }
    if(moveChar=='s'||moveChar=='S'){
        if(isCrash(arr,pos_X,pos_Y,2)==0){
            arr[(*pos_Y)][(*pos_X)]='n';
            (*pos_Y)++;
            arr[(*pos_Y)][(*pos_X)]='p';
            crashed=0;
        }
    }
    if(moveChar=='a'||moveChar=='A'){
        if(isCrash(arr,pos_X,pos_Y,3)==0){        
            arr[(*pos_Y)][(*pos_X)]='n';
            (*pos_X)--;
            arr[(*pos_Y)][(*pos_X)]='p';
            crashed=0;
        }
    }
    if(moveChar=='d'||moveChar=='D'){
        if(isCrash(arr,pos_X,pos_Y,4)==0){        
            arr[(*pos_Y)][(*pos_X)]='n';
            (*pos_X)++;
            arr[(*pos_Y)][(*pos_X)]='p';
            crashed=0;
        }
    }
    if(moveChar=='i'||moveChar=='I'){
        useItem(1);
    }

    if(crashed==0){
        eventOccur(isClass(*pos_X,*pos_Y));
        turn++;
    }
    
    return (*arr);
}

void loadMapFromFile(char mapArr[25][25], const char *filename){
    FILE *file = fopen(filename, "r");
    if(file == NULL){
        perror("파일 열기 실패");
        return;
    }
    for(int i=0; i<25; i++){
        for(int j=0; j<25;j++){
            fscanf(file,"%c",&mapArr[i][j]);
        }
        fscanf(file, "%*c");
    }
    fclose(file);
}

void printMap(char (*arr)[25]){
    for(int i=0;i<25;i++){
        for(int j=0;j<25;j++){
            if(arr[i][j]=='w'){
                printf("🟩 ");
            }
            else if(arr[i][j]=='b'){
                printf("👿 ");
            }
            else if(arr[i][j]=='h'){
                printf("🏥 ");
            }
            else if(arr[i][j]=='p'){
                printf("🤓 ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("현재 진행 턴 수: %d\n",turn);
    printf("wasd 입력으로 상하좌우 이동, i선택으로 도구 사용\n");
}

void initStartDevmon(int choiceStartDevmon){
    if(choiceStartDevmon==1){
        strcpy(myDevMon1.name, "처리처리");
    }
    if(choiceStartDevmon==2){
        strcpy(myDevMon1.name, "여니여니");
    }
    if(choiceStartDevmon==3){
        strcpy(myDevMon1.name, "승이승이");
    }
    myDevMon1.level=1;
    myDevMon1.exp=0;
    myDevMon1.atk=50;
    myDevMon1.S_atk=100;
    myDevMon1.max_hp=300;
    myDevMon1.max_mp=300;
    myDevMon1.hp=300;
    myDevMon1.mp=300;

    myDevMon2.level=0;
    myDevMon3.level=0;
    strcpy(bossDevmon.name, "이상복 교수");
    bossDevmon.max_hp = 50000;
    bossDevmon.hp = 50000;
    potion.amount=0; superPotion.amount=0; hyperPotion.amount=0; maxPotion.amount=0; mpPotion.amount=0; atkPotion.amount=0; mysteryPotion.amount=0;
}

void printPocket(){
    printf("1. 상처약: %d개\n",potion.amount);
    printf("2. 좋은 상처약: %d개\n",superPotion.amount);
    printf("3. 고급 상처약: %d개\n",hyperPotion.amount);
    printf("4. 풀 회복약: %d개\n",maxPotion.amount);
    printf("5. mp 회복약: %d개\n",mpPotion.amount);
    printf("6. 공격형 물약: %d개\n",atkPotion.amount);
    printf("7. 수상한 물약: %d개\n",mysteryPotion.amount);
    printf("8. 돌아간다.\n");
    printf("\n");
    return;
}

void choiceStarting(){
    int choiceStartDevmon;
    int correctInput=0;
    int count=0;

    printf("오! 모코코 개발자로구나! 난 기업 인사담당자란다!\n\n개발원을 혼자 돌아다니는건 위험하단다.\n\n이 개발몬 중에 하나를 골라 데려가렴!\n");
    printImage(17);
    while(correctInput==0){
        count++;
        printf("원하는 개발몬의 번호를 입력하세요!\n");
        scanf(" %d",&choiceStartDevmon);
        if(count>=5){
            printf("흠... 넌 남의 말을 잘 안 듣는 친구구나! 그런 친구는 우리 회사에선 채용할 일이 없으니 돌아가렴!\n");
            sleep(2);
            return;
        }
        switch (choiceStartDevmon)
        {
        case 1:       
            printf("오! 처리처리를 골랐구나! 좋은 친구 개발몬이 될거란다! 너만의 멋진 코드를 만들어 보렴!\n");
            initStartDevmon(choiceStartDevmon);
            correctInput=1;
            sleep(2);
            break;
        case 2:
            printf("오! 여니여니를 골랐구나! 좋은 친구 개발몬이 될거란다! 너만의 멋진 코드를 만들어 보렴!\n");
            initStartDevmon(choiceStartDevmon);
            correctInput=1;
            sleep(2);
            break;
        case 3:
            printf("오! 승이승이를 골랐구나! 좋은 친구 개발몬이 될거란다! 너만의 멋진 코드를 만들어 보렴!\n");
            initStartDevmon(choiceStartDevmon);
            correctInput=1;
            sleep(2);
            break;            
        default:
            printf("흠... 입력을 잘못한 것 같은데... 다시 원하는 개발몬 번호를 입력해보렴!\n");
            getchar();
            sleep(2);
            system("clear");
            break;
        }
        while(getchar() != '\n');
    }
}

int main(void){
    int pos_X=12,pos_Y=21;//현재 좌표를 나타내는 pos_X와 pos_Y(배열로는 [21][12] 시작)
    int GameOver=0;
    char moveChar;//w a s d로 입력을 받게 되므로 선언
    char mapArr[25][25];
    FILE *file;
    char line[100];
    file = fopen("머쓱","r");
    srand(time(NULL));
    choiceStarting();
    system("clear");
    if(myDevMon1.level==0){
        printf("아무래도 인사담당자의 심기를 건드린 것 같다... 다음 생엔 말을 잘 들어보자...\n");
        return 0;
    }
    loadMapFromFile(mapArr, "map");
    printMap(mapArr);
    printDevmon();
    while(1){
        scanf(" %c",&moveChar);
        while(getchar() != '\n');
        move(mapArr,moveChar,&pos_X,&pos_Y);
        if(myDevMon1.hp<=0&&((myDevMon2.level!=0&&myDevMon2.hp<=0)||myDevMon2.level==0)&&((myDevMon3.level!=0&&myDevMon3.hp<=0)||myDevMon3.level==0)){
            while (fgets(line, sizeof(line), file) != NULL) {
                printf("%s", line);
            }
            sleep(2);
            mapArr[21][12]='p';
            mapArr[pos_Y][pos_X]='n';
            pos_X=12;
            pos_Y=21;
            healing();
        }
        if(bossDevmon.hp<=0){
            sleep(2);
            system("clear");
            break;
        }
        printMap(mapArr);
        printDevmon();        
        printf("\n");
    }
    return 0;
}