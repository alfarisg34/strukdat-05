/*	Nama program	: exercise-01
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 26 03 2019
	Deskripsi		: 
********************************************************************/
#include<iostream>
using namespace std;
struct Pembalap {
   int nomor;
   char nama;
   int waktu;
   Pembalap* next;
   Pembalap* prev;
};
typedef Pembalap* pointer;
typedef pointer* List;
void createList(List& first)
{ 
    first=NULL;
}
void CreateElementDoubly(List& first, pointer& pBaru)
{
    pBaru=new Pembalap;
    cout<<"nomor : ";cin>>pBaru->nomor;
    cout<<"nama : ";cin>>pBaru->nama;
    cout<<"waktu : ";cin>>pBaru->waktu;
    pBaru->next=NULL;
    pBaru->prev=NULL;
}
void InsertFirstDoubly(List& first,pointer&pBaru)
{
    if(first==NULL){
        first=pBaru;
    }
    else{
        pBaru->next=first;
        first->prev=pBaru;
        first=pBaru;
    }
}
// void insertBefore(Pembalap* &head, int nomorKey, Pembalap* node){

// }
// void deleteByKey(Pembalap* &head, int nomorKey, Pembalap* &deletedNode){

// }
void linearSearch(List first,int key, int& found, pointer& pCari){
    found=0; 
    pCari=first; 
    while (found==0 && pCari!=NULL) {
        if (pCari->info==key) {
            found=1;
        }
        else {
            pCari=pCari->next;
        }
    }
}
void traversal(List first){
    pointer pBantu;
    pBantu=first;
    while(pBantu!=NULL){
        cout<<"nomor : "<<pBantu->nomor;
        cout<<"nama : "<<pBantu->nama;
        cout<<"waktu : "<<pBantu->waktu;
        pBantu=pBantu->next;
    }
    cout<<endl;
}
// void sortingByNomor(Pembalap* &head){

// }
// void update(Pembalap* firstNode, int nomorKey){

// }

int main() 
{
    pointer p;
    List m;

    for (int i = 0; i < 4; i++) {
    CreateElementDoubly(m,p);
    InsertFirstDoubly(m,p);
    }

    cout << "\n>>> List" << endl;
    for(int i=0;i<4;i++)
    {
        traversal(m);
    }

    // int keyNomor = 2;

    // cout << "\n>>> Insert Before nomor " << keyNomor << endl;
    // createNode(pBaru, 99, 'z');
    // insertBefore(head, keyNomor, pBaru); 
    // traversal(head);
    // cout << "\n>>> SortingByNomor" << endl;
    // sortingByNomor(head);
    // traversal(head);

    // keyNomor = 3;
    // cout << "\n>>> Delete nomor " << keyNomor << endl;
    // Pembalap* pHapus = NULL;
    // deleteByKey(head, keyNomor, pHapus);
    // traversal(head);

    // keyNomor = 4;
    // cout << "\n>>> Update nomor " << keyNomor << endl;
    // update(head, keyNomor);

    // cout << "\n>>> Updated list\n";
    // traversal(head);
}
