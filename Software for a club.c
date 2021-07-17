/*computer programmer preparing a software for a club. This club has around 500 members and members keep on joining and leaving every year.*/

#include <stdio.h>

int main () {
     struct record_em
     {
       long int phone_number;
       char name[500];
       char email[500];
       char address[500];
       int amount;
       int age;
       int x;
       int y;
       int n;
     };


	 printf ("Do you want to enter new user press1");
	 printf ("Do you want to enter modify the details press2");
	 printf ("Do you want to enter delete a user press3");
    char name[500];
    int age;
    long int phone_number;
    int amount;
    char email[500];
    char address[500];

	int x;
	 scanf ("%d", &x);
	 if (x == 1) {
        printf ("Enter your name: ");
        scanf ("%s", name);
        printf (" %s \n", name);
        printf ("\nEnter your age: ");
        scanf ("%d", &age);
        printf (" %d \n", age);
        printf ("\nEnter your phone_number: ");
        scanf ("%ld", &phone_number);
        printf (" %ld  \n", phone_number);
        printf ("\nEnter your amount: ");
        scanf ("%d", &amount);
        printf (" %d \n", amount);
        printf ("Email: ");
        scanf ("%s", email);
        printf (" %s \n", email);
        printf ("\n Enter your Address: ");
        scanf ("%s ", address);
        printf (" %s \n", address);
     }

	 if (x == 2)    {
        printf ("Enter phone_number::\n");
        scanf ("%ld", &phone_number);

        scanf ("%ld %s %s %s %d %d", &phone_number, name, &email, &address,
            &amount, &age);
     }

	 int n;
	 int y;
	 if (phone_number == n)
	   {
	     printf ("%ld %s %s %s %d %d", phone_number, name, email, address,
		     amount, age);
	     printf ("\n Do you want to change the phone_number press1\n");
	     printf ("\n Do you want to change the name press2\n");
	     printf ("\n Do you want to change the email press3\n");
	     printf ("\n Do you want to change the address press4\n");
	     printf ("\n Do you want to change the amount press5 \n");
	     printf ("\n Do you want to change the age press6\n");
	     scanf ("%d", &y);
	   }
    
	 if (y == 1){
	   printf ("Enter new phone_number:\n");
	 scanf ("%ld", &phone_number);}
	 if (y == 2){
	   printf ("Enter new name:\n");
	 scanf ("%s", name);}
	 if (y == 3){
	   printf ("Enter new email:\n");
	 scanf ("%s", email);}
	 if (y == 4){
	   printf ("Enter new address:\n");
	 scanf ("%s", address);}
	 if (y == 5){
	   printf ("Enter new amount:\n");
	 scanf ("%d", &amount);}
	 if (y == 6){
	   printf ("Enter new age:\n");
	 scanf ("%d", &age);}

	 int x;
	 if (x == 3);
	 struct record_em employee;
	 FILE *fp, *ft;
	 int q;
	 fp = fopen ("empRecord.dat", "r");
	 ft = fopen ("Temp.dat", "wb+");

	 printf ("\nEnter phone_number to delete ");

	 scanf ("%d", &q);
	 rewind (fp);
	 while (!feof (fp))
	   {
	     scanf ("%ld %s %s %s %d %d", &phone_number, name, &email,
		    &address, &amount, &age);

	     if (phone_number != q)
	       {
		 printf ("%ld %s %s %s %d %d", phone_number, name, email,
			 address, amount, age);
	       }
	   }

	 fclose (fp);
	 fclose (ft);
	 remove ("empRecord.dat");
	 rename ("Temp.dat", "EempRecord.dat");
	 return 0;
}
