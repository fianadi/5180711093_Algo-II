#include <iostream>
using namespace ::std;

main ()
{
    int R[10],ubah,hapus,nilai,ketemu=0,t,m,i,r,data;
    cout<<"masukkan jumlah data :"; cin>>data;
    if(data>=5)
    {
       cout<<"\ninvalid";
       {
           cout<<"masukkan jumlah data  :";
           cin>>data;
       }
       while (data>=10);
    }
    else
    {
        for(int i=0; i<data; i++)
        {
        cout<<"masukkan data ke-"<<i<<" : "; cin>>R[i];
        }
        for(int i=data-2; i>=0; i--)
        {
            for (int m=0; m<=i; m++)
            {
                if(R[m]>R[m+1])
                {
                    t=R[m];
                    R[m]=R[m+1];
                    R[m+1]=t;
                }
            }
        }
        cout<<"\nHASIL  :"<<endl;
        for(int i=0; i<data; i++)
        {
            cout<<"\ndata ke "<<i<<" : "<<R[i];
        }
    }
        cout<<"\nmasukkan nilai data yang dicari :"; cin>>nilai;
        for (int i=0; i<data; i++)
        {
            if (nilai==R[i])
            {
                ketemu=true;
                ketemu++;
                cout<<"\nnilai "<<nilai<<" ditemukan di indeks-"<<i<<endl;
                ketemu=1;
            }
        }
        if (ketemu==0)
            cout<<"\ndata yang anda cari kosong";
        cout<<"masukkan nilai data yang ingin dihapus   :"; cin>>hapus;
        for (int i=0; i<data; i++)
        {
            if(hapus==R[i])
            {
                for (int k=i; k<data; k++)
                {
                    R[k]=R[k+1];
                }
                data-=1;
            }
        }
        cout<<"========================hasil data baru =========================";
        for(int i=0; i<data; i++)
        {
            cout<<"\ndata ke-"<<i<<" : "<<R[i];
        }

        cout<<"\nmasukkan nilai data yang diubah    :"; cin>>ubah;
        for(int i=0; i<data; i++)
        {
          if (R[i]==ubah)
          {
              cout<<"masukkan nilai baru :"; cin>>R[i];
          }
        }
        for(int i=data-2; i>=0; i--)
        {
            for(int l=0; l<=i; l++)
            {
                if(R[l]>R[l+1])
                {
                    t=R[l];
                    R[l]=R[l+1];
                    R[l+1]=t;
                }
            }
        }
        cout<<"=======================data setelah diubah===========================";
        for (int i=0; i<data; i++)
        {
            cout<<"\ndata ke-"<<i<<" : "<<R[i];
        }
}
