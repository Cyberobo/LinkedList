#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* basaEkle(struct node* head,int data){
    if(head==NULL){
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        head=temp;

    }
    else{
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=head;
        head=temp;
        return head;
    }
};

struct node* sonaEkle(struct node *head,int data){
    if(head==NULL){
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;

        head=temp;

        return head;
    }
    else{
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        struct node *temp2=head;

        while(temp2->next!=NULL){
            temp2=temp2->next;
        }

        temp2->next=temp;

        return head;
    }
};

//yapilcak
void ortayaEkle(struct node *head,int data){
    if(head==NULL){
        printf("Liste bos iken sona ekleme yapamazsiniz");
        return 1;
    }

    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *temp2=head;



};

void elemanlariListele(struct node *head,int data){
    if(head==NULL)
        printf("Liste bos");
    else{
        struct node *temp2=head;
        while(temp2!=NULL){
            printf("%d ",temp2->data);
            temp2=temp2->next;
        }

    }

};

void elemaniDuzenlemeGorme(struct bode *head,int data,int index){
    if(head==NULL)
        printf("Liste bosken eleman bilgisi goremezsiniz");
    else{
        struct node *temp2=head;
        while(temp2->data!=index){

            if(temp2==NULL)
                break;

            temp2=temp2->next;
        }

        if(temp2==NULL)
            printf("Listede girmis oldugunuz eleman bulunamadi lutfen tekrar girin!");
        else{
            printf("Girdiginiz deger= %d\n",temp2->data);
            printf("Girdiginiz degerin adresi= %p\n",temp2);
        }
    }

}

void birElemanSil(struct node *head,int data,int index){
    if(head==NULL)
        printf("liste bos oldugu icin bir eleman silemezsiniz");
    else{
        struct node *temp2=head;
        struct node *temp3=head;

        while(temp2->data!=index){

            if(temp2==NULL)
                break;

            temp3=temp2;
            temp2=temp2->next;

        }
        if(temp2==NULL)
            printf("Aradiginiz deger listede bulunamadi lutfen listede olan bir deger girin!");
        else{
            temp2=temp2->next;
            temp3->next=temp2;
        }

    }
}

struct node* tumListeyiSil(struct node *head){
    if(head=NULL)
        printf("Liste bosken listeyi silemezsiniz!");
    else{
        while(head!=NULL)
            head=head->next;

        return head;
    }

};

int listeElemanSayisi(struct node *head){
    if(head==NULL)
        printf("Liste bos eleman sayisi 0 dir");
    else{
        struct node *temp2=head;
        int i=0;
        while(temp2!=NULL){
            temp2=temp2->next;
            i++;
        }

        return i;
    }

}

void elemanBilgiGoster(struct node* head,int data){
    if(head==NULL)
        printf("Liste bos oldugu icin elemanlarin bilgilerini goruntuluyemezsiniz");
    else{
        int i=1;
        struct node* temp2=head;

        printf("1. eleman adresi= %p\n",temp2);

        while(temp2!=NULL){
            printf("%d. eleman= %d\n",i,temp2->data);
            printf("%d. eleman adresi= %p\n\n",i+1,temp2->next);

            temp2=temp2->next;
            i++;
        }

    }

}

//yapicak
void listeyiTerstenYazdir(struct node *head,int data){
    //degistiricem aklima ilk geleni yazdim sadece bi kere listeyi ters yazdirmayi sagliyor!!!
    struct node *temp2=head;
    int dongu=listeElemanSayisi(head);

    while(dongu>0){

        for(int i=1;i<=dongu-1;i++){
            temp2=temp2->next;

        }

        printf("%d ",temp2->data);
        temp2=head;
        dongu--;

    }

}

//yapicak
void MaxMinBulma(struct node *head,int data){
    if(head==NULL)
        printf("liste bosken siralama yapilamaz!");
    else{
        int enBuyukDeger;
        int enKucukDeger;
        struct node *temp2=head;
        struct node *temp3=head;

        while(temp3->next!=NULL){
            if(temp2->data >= temp3->next->data){
                enBuyukDeger=temp2->data;
                enKucukDeger=temp3->next->data;
                temp3=temp3->next;

            }
            else if(temp2->data <= temp3->next->data){
                enKucukDeger=temp2->data;
                enBuyukDeger=temp3->next->data;
                temp3=temp3->next;
            }
        }

        printf("Max deger: %d\n",enBuyukDeger);
        printf("Min deger: %d\n",enKucukDeger);
    }

}

//yapilcak
void listeSiralama(struct node *head){
    if(head==NULL)
        printf("Liste bosken siralama yapamazsiniz!");
    else{
        struct node *temp2=head;
    }



}

//yapicak
void listeEkle(struct node *head,int data){
    strcut node* ekle=head;

    if(head2==NULL){
        struct node *temp=(struct node*)malloc(sizeof(struct node)));
        temp->data=data;
        temp->next=NULL;
        temp=head2;
    }
    else{
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        struct node *temp2=head2;

        while(temp2->next!=NULL){

        }

    }

}


void menu(){

    printf("------------MENU------------\n");
    printf("1-Listenin basina eleman ekle\n");
    printf("2-Listenin sonuna eleman ekleme\n");
    printf("3-Listenin ortasina eleman ekleme\n");
    printf("4-Elemanlari listele\n");
    printf("5-Elemani duzenleme gorme\n");
    printf("6-Listeden verilen bir degere sahip dugum silme\n");
    printf("7-Listeyi sil\n");
    printf("8-Listedeki eleman sayisi\n");
    printf("9-Listedeki tum eleman bilgileri\n");
    printf("10-Listeyi tersten yazdirma\n");
    printf("11-Listede max min deger bulma\n");
    printf("12-Listeyi sirala\n");
    printf("13-Listeye liste ekleme\n\n");
    printf("14-Yeni liste olustur\n\n");
    printf("15-Yeni liste eleman basa ekle");
    printf("16-Listeye liste ekleme\n\n");


}

int main()
{
    int data,secim,index;
    struct node *head=NULL;
    struct node *head2=NULL;


    while(1){
        menu();
        printf("Lutfen seciminizi girin: ");
        scanf("%d",&secim);

        switch(secim){
            case 1:
                printf("Lutfen basa eklemek istediginiz degeri girin: ");
                scanf("%d",&data);
                head=basaEkle(head,data);
                printf("\n\n");
                break;

            case 2:
                printf("Lutfen sona eklemek istediginiz sayiyi girin: ");
                scanf("%d",&data);
                head=sonaEkle(head,data);
                printf("\n\n");
                break;

            case 3:
                printf("Lutfen listenin ortasina eklemek istediginiz sayiyi girin: ");
                scanf("%d",&data);
                ortayaEkle(head,data);
                printf("\n\n");
                break;

            case 4:
                elemanlariListele(head,data);
                printf("\n\n");
                break;

            case 5:
                printf("Lutfen bilgisini gormek istediginiz degeri girin: ");
                scanf("%d",&index);
                elemaniDuzenlemeGorme(head,data,index);
                printf("\n\n");
                break;

            case 6:
                printf("Lutfen silmek istediginiz degeri girin: ");
                scanf("%d",&index);
                birElemanSil(head,data,index);
                printf("\n\n");
                break;

            case 7:
                head=tumListeyiSil(head);
                printf("Listedeki elemanlar silindi\n");
                printf("\n\n");
                break;

            case 8:
                printf("listedeki eleman sayisi: %d",listeElemanSayisi(head));
                printf("\n\n");
                break;

            case 9:
                elemanBilgiGoster(head,data);
                printf("\n\n");
                break;

            case 10:
                listeyiTerstenYazdir(head,data);
                printf("\n\n");
                break;

            case 11:
                MaxMinBulma(head,data);
                printf("\n\n");
                break;

            case 12:
                listeSiralama(head);
                printf("\n\n");
                break;

            case 13:
                listeEkle(head);
                printf("\n\n");
                break;


            default:
                printf("girdiginiz islem bulunamadi lutfen var olan islemi girin!");

        }
    }

    return 0;
}
