#include <stdio.h>
#include <stdlib.h>
int b = 1;
int k, n = 0, eid, ch = 0, factory = 1;
char newName[20];
int cdc[20];

struct factory
{
    int cdc;
        char nompre[20];
            int datfac[20];
                int motpay;
                };
int menu()
{
    int c;
        printf("\n");
        printf("::menu::\n");
        printf("0. Menu\n");
        printf("1. ajouter un client \n");
        printf("2. afficher les informations de client \n");
        printf("3. Mettre à jour les informations de client \n");
        printf("4. supprimer les informations de client\n");
        printf("Enter votre choix :  ");
        scanf("%d", &c);
            return c;
            }
void add(struct factory e[50])
            {
                printf("Enter le nombre de client  : ");
                scanf("%d", &n);
                for (k = 1; k <= n; k++)
                {
                printf("\n");
                printf("client       : %d \n", k);
                printf("code de client    : ");
                scanf("%d", &e[k].cdc);
                printf("nom et prenom de client      : ");
                scanf("%s", &e[k].nompre);
                printf("date de facture : ");
                scanf("%s", &e[k].datfac);
                printf("montant payeer     : ");
                scanf("%d", &e[k].motpay);}
                                                                                                                }
void show(struct factory e[50])
{
    printf("\t\n || All clients  Records ||\n\n");
    printf("\tcode client\t|\tnom et prenom de client\t|\tdate de facture\t|\tmontant payter\t|\n");
        printf("\t-----------------------------------------------------------------------------------------------\n");
    for (k = 1; k <= n; k++)
        {
                if (e[k].cdc != 0)
    printf("\t\t%d\t|\t\t\t%s\t|\t\t%s\t|\t\t%d\t\n", e[k].cdc, e[k].nompre, e[k].datfac, e[k].motpay);
                                }
                                }
void update(struct factory e[50])
{
    printf("\nEnter le code de client : ");
        scanf("%d", &eid);
            for (k = 1; k <= n; k++)
                {
                        if (eid == e[k].cdc)
                                {
                 printf("Do You Want To Update Your code de client?\n");
                 printf("Your Old code de client Is %s\n", e[k].nompre);
                    printf("What  Is Your Correct code de client?\n");
                 printf(">> \n");
                  scanf("%s", &newName);
                   printf("OK..\n");
                 printf("your old code de client is %s & Your new code de client is %s.\n", e[k].nompre, newName);
                printf("Do You Want To Confirm Your Changes?\n");
                printf("1.Yes  2.No\n");
                printf("Select Yes or No: ");
                scanf("%d", &ch);
                 switch (ch)
                     {
                  case 1:
                                strcpy(e[k].nompre, newName);
                            printf("client Data Updated Successfully\n");
                             printf("\n%d\t%s\t%s\t\t%f\n", e[k].cdc, e[k].nompre, e[k].datfac, e[k].motpay);
                                              break;
                case 2:
                          printf("client  Data Updation Discarded.\n");
break;
default:
                                                                                                                                                                                                                                                                                                                                                printf("wrong Choice Selected\n");
break;
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                        }
void del(struct factory e[50])
{
    printf("\nEnter le code de client : ");
        scanf("%d", &eid);
            printf("OK..\n");
                printf("toutes les informations de client supprimes.\n");
                    for (k = 1; k <= n; k++)
                        {
                                if (eid == e[k].cdc)
                                        {
                            e[k].cdc = 0;
                    strcpy(e[k].nompre, "");
                                strcpy(e[k].datfac, "");
                                                e[k].motpay = 0.0;
                                                                                                }
                                                                                                    }
                                                                                                    }
void func(struct factory e[50])
{
    switch (menu())
        {
            case 1:
                add(e);
                break;
            case 2:
                show(e);
                 break;
             case 3:
                update(e);
                break;
            case 4:
                del(e);
        break;
        case 0:
                b = 0;
                    break;
              default:
            printf("Wrong Option Selected\n");
              break;
                 }
                       }
             void choice(struct factory e[50])
      {
    {
            func(e);
                }
                }
int main()
{
    printf("::Welcome ::\n");
        struct factory e[50];
            while (b)
                {
                        choice(e);
                            }
                                return 0;
                                }
