//important: les 2 tableaux sont deja triés
//A revoir!


#include <iostream>
using namespace std;




void remplirtableau(int tab[], int x){
    for(int i=0;i<x;i++)
    {
        cin>>tab[i];
    }

}

void affichagetableau(int tab[], int x){
    for (int i=0; i<x; i++){
        cout << tab[i] << "\t";
    }
    cout << endl;
}

void fusion(int tab1[], int tab2[], int tab3[], int n, int m, int& k) {
    int i1 = 0, i2 = 0;
    while(i1 < n && i2 < m){
        if(tab1[i1] > tab2[i2]){
            tab3[k++] = tab2[i2++];
        }
        else if(tab1[i1] < tab2[i2]){
            tab3[k++] = tab1[i1++];
        }
        else {
            tab3[k++] = tab1[i1++];
            tab3[k++] = tab2[i2++];
        }
    }
    
    while(i1 < n){
        tab3[k++] = tab1[i1++];
    }
    
    while(i2 < m){
        tab3[k++] = tab2[i2++];
    }
}

int main(){
    int tab1[100], tab2[100], tab3[200];
    int n,m, k = 0;
    cout<<"DONNEZ LA TAILLE DU PREMIER TABLEAU (100 max) : ";
    cin>>n;
    remplirtableau(tab1, n);
    cout<<"DONNEZ LA TAILLE DU DEUXIEME TABLEAU (100 max) : ";
    cin>>m;
    remplirtableau(tab2, m);
    fusion(tab1,tab2,tab3,n,m,k);
    affichagetableau(tab3, k);
    return 0;
}
