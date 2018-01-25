
#include <iostream.h>
using namespace std;

class STRING
{

public:
char *s,*str1,*str2;
int STRLEN(char*);
int STRCPY(char *,char *);
int STRCMP(char*,char*);
void STRCAT(char*,char*,char*);
int STRREV(char*);
};


int main(int argc, char* argv[])
{



     // ----------- string uzunluk bulma deneme -------- //

    
     
     char son;
     STRING deneme;
     deneme.s=new char[1000];

     do
     {
     cout<<"String giriniz"<<endl;
     gets(deneme.s);
     cout<<endl<<"String uzunlugu= "<< deneme.STRLEN(deneme.s);

     cout<<endl<<"Sonlandirmak icin c ye basiniz"<<endl;
     cin>>son;
     }
     while(son!='c');


     
     // -----------  string ters cevirme deneme -------- //

     /*
     STRING dizi;
     dizi.str1=new char[1000];
     cin>>dizi.str1;
     dizi.STRREV(dizi.str1);
     cout<<dizi.str1;
     cin>>dizi.str1;
     */

      // -----------  string kopyalama deneme -------- //

     /*

     STRING deneme;
     deneme.str1=new char[1000];
     deneme.str2=new char[1000];

     cout<<"String giriniz"<<endl;
     cin>>deneme.str2;
     cout<<endl<<"String kopyalama sonuc "<< deneme.STRCPY(deneme.str1,deneme.str2);
     cout<<endl;
     cout<<deneme.str1;

     cin>>deneme.s;
      */


      // -----------  string karsilastirma deneme -------- //

      /*
     STRING deneme;
     deneme.str1=new char[1000];
     deneme.str2=new char[1000];

     cout<<"String giriniz"<<endl;
     cin>>deneme.str1;
     cout<<"Ikinci Stringi giriniz"<<endl;
     cin>>deneme.str2;
     cout<<endl<<"Karsilastirma sonucu "<<deneme.STRCMP(deneme.str1,deneme.str2);
     cin>>deneme.str2;

      */

     // -----------  string string birlestirme deneme -------- //
     /*
     STRING deneme;
     deneme.str1=new char[1000];
     deneme.str2=new char[1000];
     deneme.s=new char[1000];

     cout<<"String giriniz"<<endl;
     cin>>deneme.str1;
     cout<<"Ikinci Stringi giriniz"<<endl;
     cin>>deneme.str2;
     deneme.STRCAT(deneme.str1,deneme.str2,deneme.s);
     cout<<endl<<"Toplam string "<<deneme.s;

     cin>>deneme.s;
      */


        return 0;
}
//---------------------------------------------------------------------------
int STRING:: STRLEN(char *s)
{

  int i=0;
  while(s[i]!='\0')
   i++;
  return i;

}
int STRING::STRCPY(char *str1,char *str2)
{
  int i=0;

  i=STRLEN(str2);

  while(i>0)
   {
    *str1=*str2;
    str1++;
    str2++;
    i--;
   }

  if(i==0)  return 1;
    else    return 0;
}

int STRING::STRCMP(char*str1,char*str2)
{
  int uz=STRLEN(str2);
  int k;
  while(uz>0)
  {
   if(*str1==*str2)
   {k=1;uz--;str1++;str2++; continue;}
    else
   {k=0; break; }

    }
    return k;
}

void STRING::STRCAT(char *str1,char *str2,char *str3)
{    

 int i=STRLEN(str1);

   STRCPY(str3,str1);

   while(i>0)
    {str3++; i--;}

   STRCPY(str3,str2);

}

int STRING::STRREV(char *str)
{
  int i=STRLEN(str),j=0;
  char *syedek;
  syedek=new char[1000];

  while(i!=0)
  {
    syedek[j]=str[i-1];
    j++;
    i--;
  }

 STRCPY(str,syedek);
 return 0;
}
//----------------------------------------------------------------------------------------------------------
