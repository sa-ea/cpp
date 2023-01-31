//saman abbasi first Project.
#include <iostream>

using namespace std;
int a[10][10], b[10][10], sum[10][10], r1, c1, r2, c2, i, j, k;

int tot(){
  // elements of matrix 1 .
    for(i = 0; i < r1; ++i)
       for(j = 0; j < c1; ++j)
       {
           cout << "Enter elements a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // elements of matrix 2 .
    cout << "\n" << "Enter elements of 2nd matrix: " << "\n" ;

    for(i = 0; i < r2; ++i)
       for(j = 0; j < c2; ++j)
       {
           cout << "Enter elements b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // show the sum
    cout << "\n" << "Sum of two matrix is: " << "\n" ;
    for(i= 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j== c1 - 1)
                cout << "\n" ;
        }

return 0;
}
int min(){
 // elements of matrix 1 .
    for(i = 0; i < r1; ++i)
       for(j = 0; j < c1; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // elements of matrix 2 .
    cout << "\n" << "Enter elements of 2nd matrix: " << "\n" ;

    for(i = 0; i < r2; ++i)
       for(j = 0; j < c2; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            sum[i][j] = a[i][j] - b[i][j];

    // show the sum
    cout << "\n" << "Sum of two matrix is: " << "\n" ;
    for(i= 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j== c1 - 1)
                cout << "\n" ;
        }
return 0;
}
int mul(){
  // elements of matrix 1 .
    for(i = 0; i < r1; ++i)
       for(j = 0; j < c1; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // element of matrix 2 .
    cout << "\n" << "Enter elements of 2nd matrix: " << "\n" ;

    for(i = 0; i < r2; ++i)
       for(j = 0; j < c2; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            sum[i][j] = a[i][j] * b[i][j];

    // show the sum
    cout << "\n" << "Sum of two matrix is: " << "\n" ;
    for(i= 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j== c1 - 1)
                cout << "\n" ;
        }

return 0;
}
int main(){
	cout<<"use + - * for Enter process"<<"\n";

   while (c1!=r2)
  
      cout << "Error! column of first matrix not equal to row of second.";

      cout << "Enter rows and columns for first matrix: ";
      cin >> r1 >> c1;

       cout << "Enter rows and columns for second matrix: ";
       cin >> r2 >> c2;
       
   
      char process;
   cout<<("which process do u want?");
   
     cin >> process;
   	switch (process){
	case '*' : mul();
		break;
		case '-' : min();
			break;
				case '+' : tot();
					break;
					default : cout << "congratulations u find a bug"<<"\n";
}
}
