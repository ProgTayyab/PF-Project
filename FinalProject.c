#include<stdio.h>
int Authentication();
int Login();
int SignUp();
int CustomerLogin();
int SellerLogin();







int main(){
return 0;
}
/*Login(){
    char user id
} */
SignUp(){

char Name[20];
char Email[20];
int  NewPassword[6];
int  RewritePassword[6];

printf("Enter Your name : \n");
scanf("%s",&Email);
printf("Create your password   :must consist of a specialchar,digit,upper,lowercase character: \n");
for(int i=0;i<6;i++){
 scanf("%d",NewPassword[i]);   
}
printf("Enter Passoword again : \n");

for(int i=0;i<6;i++){
 scanf("%d",RewritePassword[i]);   
}

for(int i=0;i<6;i++){
if{
    NewPassword[i]==RewritePassword[i];
}
else{
    printf("Passwords dosnt matches \n");
    printf("Create your password   :must consist of a specialchar,digit,upper,lowercase character: \n");
    for(int i=0;i<6;i++){
    scanf("%d",NewPassword[i]);   
    }
    printf("Enter Passoword again : \n");

    for(int i=0;i<6;i++){
    scanf("%d",RewritePassword[i]);   
    }
    
    // looop will run which will take you back to the new password
}

}

}