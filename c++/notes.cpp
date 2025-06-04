// compailer minGW
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    cout << "hello , Ananya welcome to c++ programming"<<endl<<"abc";
    cout << endl; // work like enter
    // cout << "/n";
    cout << "hello , Ananya welcome to c++ programming"<<endl;
    int x=5 ;
    cout <<x<<endl;
    cout <<x+74<<endl;
    float y=6.45;
    cout <<x+y<<endl;
    int c = 65;
    int r;
    //input field
    // cin>>r;
    cout << "Area of circle = ";
    cout <<  3.14*r*r<<endl;
    cout << "Area of circle = "<<3.14*r*r<<endl;
    //typecasting
    int a ;
    float v = (float)a;
    char f = '#';
    cout << (int)f<<endl; // give ascii value
    cout <<(char)c<<endl;
    // if-else
    cin>>a;
    if(a%2==0){
        cout<<"even"<<endl;
    } 
    else if(a%2!=0) {
        cout<<"odd";
    }
    else{
        cout<<"write valid value";
    }
    // ternery operator
    (a%2==0) ? cout<<"even number":cout<<"odd number";
    // switch statement
    int code;
    if (a < 30)
        code = 1;
    else if (a < 50)
        code = 2;
    else if (a < 100)
        code = 3;
    else
        code = 4;

    switch (code) {
        case 1:
            cout << "less than 30";
            break;
        case 2:
            cout << "less than 50 greater than 30";
            break;
        case 3:
            cout << "less than 100 and greater than 50";
            break;
        default:
            cout << "greater than 100"; cout<<"greater than 100";
    }
    // loops
    for(int i =0;i<=5;i++){
        cout<<i<<endl;
    } 
    // bool x = true;
    //while loops
    int j =1;
    while(j<=10){
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    // do while loop
    int k =1;
    do{
        cout<<k<<" ";
        k++;
    } while(k<=10);
    cout<<endl;
    // reverse a number
    int n = 123;
    int reversed=0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 ;
        reversed+=digit;
        n = n / 10;
    }
    cout << reversed;
    // function
    void usa(){
        cout<<"you are in usa";
        return ;

    }
    int sum(int a, int b ){
        return a+b;
    } 
    for squreroot
   
    cout <<sqrt(4);
    cout<<endl;
    cout <<cbrt(8);//cuberoot
    cout<<endl;
    cout <<min(4,8);
    cout<<endl;
    cout<<max(8,78);
    cout<<endl;
    cout<<pow(3,9);
    cout<<endl;
    //pointers
    //hum referance ka use krke value print karbate hai 
    int d= 3;
    int* p = &d; //&d = d ka address
    cout<<&d<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;//star operator ya d referance
    cout<<&p<<endl;
    //recursion
    void print(int n){
        if (n==0) return ;
        cout<<n<<endl;
        print(n-1);
    }
    //arrays
    int w[]={1,8,7,5,9};//array decleration means five columns
    w[0]=1;
    w[1]=2;
    w[2]=3;
    w[3]=4;
    w[4]=5;
    cout<<w;
    // //array input
    for (int i =0;i<=4;i++){
        cin>>w[i]
    }
    for (int i =0;i<=4;i++){
        cout<<w[i]
    }
    // // long long x; it is a datatype
    cout<<sizeof(w);//tells how many bytes does your variable take

    //reverse array
    int e[]={87,55,46,39,76,93}
    int f = sizeof(e)/4;
    int g[f];
    for (int i =0;i<f;i++){
        int j = f-1-i;
        g[i]=e[j];    
    }
    for (int i =0;i<f;i++){
        cout<<g[i]<<" ";
    }
    //string
    string s = "ananya";
    getline(cin,s);//input in string
    cout<<s;
    cout<<s.length();
    s.push_back('a');//append
    s.pop_back();//remove
    s.append(" anya");
    reverse(s.begin(),s.end());
    s.clear();//clear the string
    s="gupta"+s;
    string s= to_string(x);//integer to string











    return 0;
}


// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     cin>>a;
//     if(a>2 && a%2==0){
//         cout<<"YES";
//     }
//     else{
//         cout<<"N0";
//     }
//     return 0;
// }