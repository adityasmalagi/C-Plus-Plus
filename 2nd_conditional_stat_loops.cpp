 #include <iostream>
 using namespace std;

 int main(){
    int a3 ,b3;
        cout << "Enter 1st number: ";
        cin >> a3;
        cout << "Enter 2nd number: "; 
        cin >> b3;
        
        cout << "Select the operator: + - / % * : " << endl;
    
        char ch;
    
        cout << "the operator : ";
        cin >> ch;
    
        if(ch == '+'){
            cout << "Sum of two number : " << (a3+b3) << endl;
        }
        else if (ch == '-'){
            cout << "substract of two number : " << (a3 - b3) << endl;
        }
        else if (ch == '*'){
            cout << "multiple of two number : " << (a3 * b3) << endl;
        }
        else{
            cout << "divide of two number : " << (a3 / b3) << endl;
        }


    char cha;
    cout << "Enter the letter: ";
    cin >> cha;

    if (cha >= 'a' && cha <= 'z'){
        cout << "lowercase letter"<< endl;
    }else{
        cout << "uppercase letter" << endl;
    }

    int n = 45;
    cout << (n >= 0 ? "positive" : "negetive") << endl;

    // loops 

    // print number 1 to 5
     
    int i = 1, n2 = 20;      // while loop
    while(i <= n2){
        cout << i << " ";
        i++;
    }
    cout << endl;

    // for  loop
    int c = 5,sum = 0;                 //for loop
    
    for(int i=1; i<=c ;i++){
        cout << i << " ";
        sum += i;
        if(i == 3){
            break;
        }
    }
    cout << endl;
    cout << "Sum is = " << sum << endl;

    int d = 10,sum2 = 0;
    for(int i= 1;i<=d;i++){
        cout << i << " ";
        if (i % 2 != 0){
        sum2 += i;
        }
    }
    cout << endl;
    cout << "sum of odd num = " << sum2 << endl;

    // do while loop

    do{
        cout << "hello world " << endl;
    }while (3 > 5);
    
    int v = 10;
    int j = 1;
    do{
        cout << j << " ";
        j++;
    }while(j <= v);
    
    cout << endl;

    int n3 = 7;
    bool isPrime = true;

    for(int i= 2; i*i <=n3;i++){
        if(n3 % i == 0){
            isPrime = false;
            break;
        }
    } 

    if(isPrime == true){
        cout << "prime no\n";
    }else{
        cout << "non prime no\n";
    }


    // nested loop 

    for(int i = 1;i<= 5;i++){
        cout << "******" << endl;
    }

    int n4 = 4;
    for(int i= 1;i<=n4;i++){
        int m = 10;
        for (int i = 1; i<=m; i++){
            cout << "*";
        }
        cout << endl;
    }
    


    int a = 10,sum3 = 0;
    for (int i= 1;i<= a;i++){
        if(i % 3 ==0){
            sum3 += i;
        }
    }
    cout << "the total sum is = " << sum3 << endl;
    cout << endl;

    
    int n5,s = 1;
    cout << "enter the number: ";
    cin >> n5;
    for (int i= 1;i<= n5;i++){
            s *= i;
    }
    cout << "the total sum is = " << s << endl;
    cout << endl;
    return 0;
 }
