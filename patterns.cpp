#include <iostream>
using namespace std;

void print1(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                cout << i << " ";
        }
    cout << "\n";
    }
    
}
void print2(int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<i; j++){
            cout <<" ";
        }
        for(int l=1 ;l<=2*n-2*i-1; l++){
                cout << "*";
            }
    cout << "\n";
    }
}
void print3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int l=0;l<=2*i;l++){
            cout << "*";
        }
    cout << "\n";
    
    }
    for(int i=0; i<=(n-1);i++){
        for(int j=0;j<i+1; j++){
            cout <<" ";
        }
        for(int l=1 ;l<=2*(n-1)-2*i-1; l++){
                cout << "*";
            }
    cout << "\n";
    }
}
void print4(int n){ 
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
    cout << "\n";
    }
    for(int i=0;i<(n);i++){
        for(int j=0;j<n-i-1;j++){
            cout << "* ";
        }
    cout << "\n";
    }
}
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2==0){
                    cout << "1 ";
                }
                else{
                    cout << "0 ";
                }
            }
            else{
                if(j%2==0){
                    cout << "0 ";
                }
                else{
                    cout << "1 ";
                }
            }
        }
    cout << endl;    
    }
}
void print6(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int l=1;l<=(8.0/5)*n-2*i;l++){
            cout << " ";
        }
        for(int m=i;m>=1;m--){
            cout << m;
        }
        cout << "\n";
}
}
void print7(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num += 1;
        }
    cout << "\n";
    }
}
void print8(int n){
    for(int i = 1 ; i<=n;i++){
        for(char ch='A';ch < 'A'+ i;ch++){
            cout << ch;
        }
    cout << "\n";
    }
}
void print9(int n){
    for(int i = 1 ; i<=n;i++){
        for(char ch='A';ch < 'A'+ n-i;ch++){
            cout << ch;
        }
    cout << "\n";
    }
}
void print10(int n){
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=i;j++){
            cout << ch;
            
        }
    cout << "\n";
    }
}
void print11(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        char ch ='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout << ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
    cout << "\n";
    }
}
void print12(int n){
    for(int i=0;i<n;i++){ 
        for(char ch='E'-i;ch<='E';ch++){
            cout << ch << " ";
        }
        cout << "\n";
        }
    }
void print13(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=n-i;j>=1;j--){
            cout << "* ";
        }
        //space
        for(int l=1;l<=2*i;l++){
            cout << "  ";
        }
        //star
        for(int j=n-i;j>=1;j--){
            cout << "* ";
    }
    cout << "\n";
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        for(int l=1;l<=2*n-2*i;l++){
            cout << "  ";
        }
        for(int m=1;m<=i;m++){
            cout << "* ";
        }
    
    cout << "\n";
}
}
void print14(int n){
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int j=1;j<=n;j++){
                cout << "*";
            }
        }
        else {
            cout <<"*";
            for(int j=1;j<=n-2;j++){
                cout << " ";
            }
            cout << "*";
        }
    cout << "\n";    
    }
}
void print15(int n){
    for(int i=1;i<=n+2;i++){
        
        if(i==1 || i==n+2){
            for(int j=1;j<=n+2;j++){
                cout << n-1;
            }
        
        }
        else{
            cout<< n-1;
            for(int l=1;l<=n;l++){
                cout << " ";
            }
            cout << n-1;
        }
        for(int i=1;i<=n+1;i++){
        if(i==2 || i==n){
            for(int j=2;j<=n;j++){
                cout << n-2;

            }
        }
    }
    cout << "\n";    
    }
    
}
int main(){
    int n = 5;
    print12(n);
}

