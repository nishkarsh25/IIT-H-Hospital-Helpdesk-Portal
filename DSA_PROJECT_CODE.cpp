#include <iostream>
using namespace std;
#include<string.h>
#include <fstream>
#include <sstream>

struct Node
{
 string Name;
 string Department;
 string Type;
 string Period;
 string Feedback;
 string Phone;
 string Email;
 string Number;
 struct Node *next;
}*first=NULL;

struct NodeP
{
 string NameP;
 string DepartmentP;
 string TypeP;
 string RollP;
 string PhoneP;
 string EmailP;
 string AddressP;
 string PastP;
 string EthicsP;
 struct NodeP *next;
}*firstP=NULL;

void SortedInsert(struct Node *p,string Name,string Department,string Type,string Period,string Feedback,string Phone,string Email,string Number)
{

 struct Node *t,*q=NULL;

 t=(struct Node*)malloc(sizeof(struct Node));
 t->Name=Name;
 t->Department=Department;
 t-> Type=Type;
 t-> Period=Period;
 t-> Feedback=Feedback;
 t-> Phone=Phone;
 t-> Email=Email;
 t-> Number=Number;
 t->next=NULL;

 if(first==NULL)
 first=t;
 else
 {
 while(p && p->Name.compare(Name)<0)
 {
 q=p;
 p=p->next;
 }
 if(p==first)
 {
 t->next=first;
 first=t;
 }
 else
 {
 t->next=q->next;
 q->next=t;
 }
 }

}

struct Node * NameSearch(struct Node *p,string Name)
{
if(p==NULL)
return NULL;
if(Name==p->Name)
return p;
return NameSearch(p->next,Name);
}

void SearchName(struct Node *p,string Name)
{
    struct Node *t;
    while(p)
    {
      if(Name==p->Name)
      {
          t=p;
          cout<<t->Name<<" "<<t->Department<<" "<<t-> Type<<" "<<t-> Period<<" "<<t-> Feedback<<" "<<t-> Phone<<" "<<t-> Email<<" "<<t-> Number<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchDepartment(struct Node *p,string Department)
{
    struct Node *t;
    while(p)
    {
      if(Department==p->Department)
      {
          t=p;
          cout<<t->Name<<" "<<t->Department<<" "<<t-> Type<<" "<<t-> Period<<" "<<t-> Feedback<<" "<<t-> Phone<<" "<<t-> Email<<" "<<t-> Number<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchType(struct Node *p,string Type)
{
    struct Node *t;
    while(p)
    {
      if(Type==p->Type)
      {
          t=p;
          cout<<t->Name<<" "<<t->Department<<" "<<t-> Type<<" "<<t-> Period<<" "<<t-> Feedback<<" "<<t-> Phone<<" "<<t-> Email<<" "<<t-> Number<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchPeriod(struct Node *p,string Period)
{
    struct Node *t;
    while(p)
    {
      if(Period==p->Period)
      {
          t=p;
          cout<<t->Name<<" "<<t->Department<<" "<<t-> Type<<" "<<t-> Period<<" "<<t-> Feedback<<" "<<t-> Phone<<" "<<t-> Email<<" "<<t-> Number<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchFeedback(struct Node *p,string Feedback)
{
    struct Node *t;
    while(p)
    {
      if(Feedback==p->Feedback)
      {
          t=p;
          cout<<t->Name<<" "<<t->Department<<" "<<t-> Type<<" "<<t-> Period<<" "<<t-> Feedback<<" "<<t-> Phone<<" "<<t-> Email<<" "<<t-> Number<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchPhone(struct Node *p,string Phone)
{
    struct Node *t;
    while(p)
    {
      if(Phone==p->Phone)
      {
          t=p;
          cout<<t->Name<<" "<<t->Department<<" "<<t-> Type<<" "<<t-> Period<<" "<<t-> Feedback<<" "<<t-> Phone<<" "<<t-> Email<<" "<<t-> Number<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchEmail(struct Node *p,string Email)
{
    struct Node *t;
    while(p)
    {
      if(Email==p->Email)
      {
          t=p;
          cout<<t->Name<<" "<<t->Department<<" "<<t-> Type<<" "<<t-> Period<<" "<<t-> Feedback<<" "<<t-> Phone<<" "<<t-> Email<<" "<<t-> Number<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchNumber(struct Node *p,string Number)
{
    struct Node *t;
    while(p)
    {
      if(Number==p->Number)
      {
          t=p;
          cout<<t->Name<<" "<<t->Department<<" "<<t-> Type<<" "<<t-> Period<<" "<<t-> Feedback<<" "<<t-> Phone<<" "<<t-> Email<<" "<<t-> Number<<endl;
      }
      p=p->next;
    }

    return;
}

void Search()
{
    int n;
    string Name;
    string Department;
    string Type;
    string Period;
    string Feedback;
    string Phone;
    string Email;
    string Number;
    cout<< "1. Search By Name of the doctor"<<endl;
    cout<< "2. Search By Department of the doctor"<<endl;
    cout<< "3. Search By Type of employment"<<endl;
    cout<< "4. Search By Period of availability"<<endl;
    cout<< "5. Search By Feedback Rating"<<endl;
    cout<< "6. Search By Phone No"<<endl;
    cout<< "7. Search By Email Id"<<endl;
    cout<< "8. Search By Number of patients"<<endl;
    cin>>n;
switch (n) {
  case 1:
    getline(cin>>ws, Name);
    SearchName(first,Name);
    break;
  case 2:
    getline(cin>>ws, Department);
    SearchDepartment(first,Department);
    break;
  case 3:
    getline(cin>>ws, Type);
    SearchType(first,Type);
    break;
  case 4:
    getline(cin>>ws, Period);
    SearchPeriod(first,Period);
    break;
  case 5:
    getline(cin>>ws,Feedback);
    SearchFeedback(first,Feedback);
    break;
  case 6:
    getline(cin>>ws, Phone);
    SearchPhone(first,Phone);
    break;
  case 7:
    getline(cin>>ws, Email);
    SearchEmail(first,Email);
    break;
  case 8:
    getline(cin>>ws, Number);
    SearchNumber(first,Number);
    break;
}
}



int count(struct Node* p)
{
    int len=0;
    while(p)
    {
      len++;
      p=p->next;
    }
    return len;
}

string Delete(struct Node *p,string Name)
{
struct Node* r,*s=NULL;
r=p;
s=NameSearch(first,Name);
int index=1;
while(r!=s&&r)
{

    index++;
    r=r->next;
}
struct Node *q=NULL;
string x="-1";int i;
if(index < 1 || index > count(p))
return x;
if(index==1)
{
q=first;
x=first->Name;
first=first->next;
free(q);
return x;
}
else
{
for(i=0;i<index-1;i++)
{
q=p;
p=p->next;
}
q->next=p->next;
x=p->Name;
free(p);
return x;
}
}

void Display(struct Node *t)
{
 while(t!=NULL)
 {
 cout<<t->Name<<" "<<t->Department<<" "<<t-> Type<<" "<<t-> Period<<" "<<t-> Feedback<<" "<<t-> Phone<<" "<<t-> Email<<" "<<t-> Number<<endl;
 t=t->next;
 }
}

void Update(string Name)
{
    string Department;
    string Type;
    string Period;
    string Feedback;
    string Phone;
    string Email;
    string Number;
    struct Node *t;
    t=NameSearch(first,Name);
    if(t)
    {
    cout<<"Department of the doctor:";
    getline(cin>>ws,Department);
    cout<<"Type of employment:";
    getline(cin>>ws,Type);
    cout<<"Period of availability:";
    getline(cin>>ws,Period);
    cout<<"Feedback Rating:";
    getline(cin>>ws,Feedback);
    cout<<"Phone No:";
    getline(cin>>ws,Phone);
    cout<<"Email Id:";
    getline(cin>>ws,Email);
    cout<<"Number of patients:";
    getline(cin>>ws,Number);
    t->Department=Department;
    t-> Type=Type;
    t-> Period=Period;
    t-> Feedback=Feedback;
    t-> Phone=Phone;
    t-> Email=Email;
    t-> Number=Number;
    }
    else
    cout<<"No such doctor in the directory"<<endl;
}

void SortedInsertP(struct NodeP *p,string NameP,string DepartmentP,string TypeP,string RollP,string PhoneP,string EmailP,string AddressP,string PastP,string EthicsP)
{

 struct NodeP *t,*q=NULL;

 t=(struct NodeP*)malloc(sizeof(struct NodeP));
 t->NameP=NameP;
 t->DepartmentP=DepartmentP;
 t-> TypeP=TypeP;
 t-> RollP=RollP;
 t-> PhoneP=PhoneP;
 t-> EmailP=EmailP;
 t-> AddressP=AddressP;
 t-> PastP=PastP;
 t-> EthicsP=EthicsP;
 t->next=NULL;

 if(firstP==NULL)
 firstP=t;
 else
 {
 while(p && p->NameP.compare(NameP)<0)
 {
 q=p;
 p=p->next;
 }
 if(p==firstP)
 {
 t->next=firstP;
 firstP=t;
 }
 else
 {
 t->next=q->next;
 q->next=t;
 }
 }

}

struct NodeP * NamePSearch(struct NodeP *p,string NameP)
{
if(p==NULL)
return NULL;
if(NameP==p->NameP)
return p;
return NamePSearch(p->next,NameP);
}

void SearchNameP(struct NodeP *p,string NameP)
{
    struct NodeP *t;
    while(p)
    {
      if(NameP==p->NameP)
      {
          t=p;
          cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchDepartmentP(struct NodeP *p,string DepartmentP)
{
    struct NodeP *t;
    while(p)
    {
      if(DepartmentP==p->DepartmentP)
      {
          t=p;
          cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchTypeP(struct NodeP *p,string TypeP)
{
    struct NodeP *t;
    while(p)
    {
      if(TypeP==p->TypeP)
      {
          t=p;
          cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchRollP(struct NodeP *p,string RollP)
{
    struct NodeP *t;
    while(p)
    {
      if(RollP==p->RollP)
      {
          t=p;
          cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchPhoneP(struct NodeP *p,string PhoneP)
{
    struct NodeP *t;
    while(p)
    {
      if(PhoneP==p->PhoneP)
      {
          t=p;
          cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchEmailP(struct NodeP *p,string EmailP)
{
    struct NodeP *t;
    while(p)
    {
      if(EmailP==p->EmailP)
      {
          t=p;
          cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchAddressP(struct NodeP *p,string AddressP)
{
    struct NodeP *t;
    while(p)
    {
      if(AddressP==p->AddressP)
      {
          t=p;
          cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchPastP(struct NodeP *p,string PastP)
{
    struct NodeP *t;
    while(p)
    {
      if(PastP==p->PastP)
      {
          t=p;
          cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchEthicsP(struct NodeP *p,string EthicsP)
{
    struct NodeP *t;
    while(p)
    {
      if(EthicsP==p->EthicsP)
      {
          t=p;
          cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
      }
      p=p->next;
    }

    return;
}

void SearchP()
{
    int n;
    string NameP;
    string DepartmentP;
    string TypeP;
    string RollP;
    string PhoneP;
    string EmailP;
    string AddressP;
    string PastP;
    string EthicsP;
    cout<< "1. Search By Name of the patient"<<endl;
    cout<< "2. Search By Department of the patient"<<endl;
    cout<< "3. Search By Type of employment"<<endl;
    cout<< "4. Search By Roll No. of student"<<endl;
    cout<< "5. Search By Phone No"<<endl;
    cout<< "6. Search By Email Id"<<endl;
    cout<< "7. Search By Address"<<endl;
    cout<< "8. Search By Past"<<endl;
    cout<< "9. Search By Ethics"<<endl;
    cin>>n;
switch (n) {
  case 1:
    getline(cin>>ws, NameP);
    SearchNameP(firstP,NameP);
    break;
  case 2:
    getline(cin>>ws, DepartmentP);
    SearchDepartmentP(firstP,DepartmentP);
    break;
  case 3:
    getline(cin>>ws, TypeP);
    SearchTypeP(firstP,TypeP);
    break;
  case 4:
    getline(cin>>ws, RollP);
    SearchRollP(firstP,RollP);
    break;
  case 5:
    getline(cin>>ws,PhoneP);
    SearchPhoneP(firstP,PhoneP);
    break;
  case 6:
    getline(cin>>ws, EmailP);
    SearchEmailP(firstP,EmailP);
    break;
  case 7:
    getline(cin>>ws, AddressP);
    SearchEmailP(firstP,AddressP);
    break;
  case 8:
    getline(cin>>ws, PastP);
    SearchPastP(firstP,PastP);
    break;
  case 9:
    getline(cin>>ws, EthicsP);
    SearchEthicsP(firstP,EthicsP);
    break;
}
}



int count(struct NodeP* p)
{
    int len=0;
    while(p)
    {
      len++;
      p=p->next;
    }
    return len;
}

string DeleteP(struct NodeP *p,string NameP)
{
struct NodeP* r,*s=NULL;
r=p;
s=NamePSearch(firstP,NameP);
int index=1;
while(r!=s&&r)
{

    index++;
    r=r->next;
}
struct NodeP *q=NULL;
string x="-1";int i;
if(index < 1 || index > count(p))
return x;
if(index==1)
{
q=firstP;
x=firstP->NameP;
firstP=firstP->next;
free(q);
return x;
}
else
{
for(i=0;i<index-1;i++)
{
q=p;
p=p->next;
}
q->next=p->next;
x=p->NameP;
free(p);
return x;
}
}

void DisplayP(struct NodeP *t)
{
 while(t!=NULL)
 {
 cout<<t->NameP<<" "<<t->DepartmentP<<" "<<t-> TypeP<<" "<<t->RollP<<" "<<t->PhoneP<<" "<<t->EmailP<<" "<<t->AddressP<<" "<<t->PastP<<" "<<t->EthicsP<<endl;
 t=t->next;
 }
}

void UpdateP(string NameP)
{
    string DepartmentP;
    string TypeP;
    string RollP;
    string PhoneP;
    string EmailP;
    string AddressP;
    string PastP;
    string EthicsP;
    struct NodeP *t;
    t=NamePSearch(firstP,NameP);
    if(t)
    {
    cout<<"Department of the patient:";
    getline(cin>>ws,DepartmentP);
    cout<<"Type of employment:";
    getline(cin>>ws,TypeP);
    cout<<"Roll no:";
    getline(cin>>ws,RollP);
    cout<<"Phone No:";
    getline(cin>>ws,PhoneP);
    cout<<"Email Id:";
    getline(cin>>ws,EmailP);
    cout<<"Address:";
    getline(cin>>ws,AddressP);
    cout<<"Past appointment history:";
    getline(cin>>ws,PastP);
    cout<<"Ethics Rating:";
    getline(cin>>ws,EthicsP);
    t->DepartmentP=DepartmentP;
    t->TypeP=TypeP;
    t->RollP=RollP;
    t->PhoneP=PhoneP;
    t->EmailP=EmailP;
    t->AddressP=AddressP;
    t->PastP=PastP;
    t->EthicsP=EthicsP;
    }
    else
    cout<<"No such patient in the directory"<<endl;
}




int main()
{
/*
 int n;
 cin>>n;

 string Name;
 string Department;
 string Type;
 string Period;
 string Feedback;
 string Phone;
 string Email;
 string Number;
 for(int i=0;i<n;i++)
 {
    cout<<"Name of the doctor:";
    getline(cin>>ws, Name);
    cout<<"Department of the doctor:";
    getline(cin>>ws,Department);
    cout<<"Type of employment:";
    getline(cin>>ws,Type);
    cout<<"Period of availability:";
    getline(cin>>ws,Period);
    cout<<"Feedback Rating:";
    getline(cin>>ws,Feedback);
    cout<<"Phone No:";
    getline(cin>>ws,Phone);
    cout<<"Email Id:";
    getline(cin>>ws,Email);
    cout<<"Number of patients:";
    getline(cin>>ws,Number);
    if(NameSearch(first,Name)==NULL)
    SortedInsert(first,Name,Department,Type,Period,Feedback,Phone,Email,Number);
 }

 cout<<"Delete:";
 getline(cin>>ws, Name);
 Display(first);
 Delete(first,Name);
 Display(first);
 cout<<"Update:";
 getline(cin>>ws, Name);
 Update(Name);
 Display(first);
 Search();
*/

    ifstream inputFile;
    inputFile.open("BM2043_PROJECT_DATA.csv");

    string line="";
    getline(inputFile, line);
    line="";

    while(getline(inputFile, line))
    {
       string Name;
       string Department;
       string Type;
       string Period;
       string Feedback;
       string Phone;
       string Email;
       string Number;

       stringstream inputString(line);
       getline(inputString, Name, ',');
       getline(inputString, Department, ',');
       getline(inputString, Type, ',');
       getline(inputString, Period, ',');
       getline(inputString, Feedback, ',');
       getline(inputString, Phone, ',');
       getline(inputString, Email, ',');
       getline(inputString, Number, ',');

       line="";

      if(NameSearch(first,Name)==NULL)
      SortedInsert(first,Name,Department,Type,Period,Feedback,Phone,Email,Number);

    }
    Display(first);

/*
   int n;
 cin>>n;

 string NameP;
 string DepartmentP;
 string TypeP;
 string RollP;
 string PhoneP;
 string EmailP;
 string AddressP;
 string PastP;
 string EthicsP;
 for(int i=0;i<n;i++)
 {
    cout<<"Name of the patient:";
    getline(cin>>ws, NameP);
    cout<<"Department of the patient:";
    getline(cin>>ws,DepartmentP);
    cout<<"Type of employment:";
    getline(cin>>ws,TypeP);
    cout<<"Roll no:";
    getline(cin>>ws,RollP);
    cout<<"Phone No:";
    getline(cin>>ws,PhoneP);
    cout<<"Email Id:";
    getline(cin>>ws,EmailP);
    cout<<"Address:";
    getline(cin>>ws,AddressP);
    cout<<"Past appointment history:";
    getline(cin>>ws,PastP);
    cout<<"Ethics Rating:";
    getline(cin>>ws,EthicsP);
    if(NamePSearch(firstP,NameP)==NULL)
    SortedInsertP(firstP,NameP,DepartmentP,TypeP,RollP,PhoneP,EmailP,AddressP,PastP,EthicsP);
 }

 cout<<"Delete:";
 getline(cin>>ws, NameP);
 DisplayP(firstP);
 DeleteP(firstP,NameP);
 DisplayP(firstP);
 cout<<"Update:";
 getline(cin>>ws, NameP);
 UpdateP(NameP);
 DisplayP(firstP);
 SearchP();
 */
 /*
 ifstream inputFile;
    inputFile.open("BM2043_PROJECT_DATA.csv");

    string line="";
    getline(inputFile, line);
    line="";
    cout<<"DATA"<<endl;
    while(getline(inputFile, line))
    {
      string NameP;
      string DepartmentP;
      string TypeP;
      string RollP;
      string PhoneP;
      string EmailP;
      string AddressP;
      string PastP;
      string EthicsP;

       stringstream inputString(line);
       getline(inputString, NameP, ',');
       getline(inputString, DepartmentP, ',');
       getline(inputString, TypeP, ',');
       getline(inputString, RollP, ',');
       getline(inputString, PhoneP, ',');
       getline(inputString, EmailP, ',');
       getline(inputString, AddressP, ',');
       getline(inputString, PastP, ',');
       getline(inputString, EthicsP, ',');

       line="";

      if(NamePSearch(firstP,NameP)==NULL)
      SortedInsertP(firstP,NameP,DepartmentP,TypeP,RollP,PhoneP,EmailP,AddressP,PastP,EthicsP);

    }
    DisplayP(first);
*/

    string Name;
    string Department;
    string Type;
    string Period;
    string Feedback;
    string Phone;
    string Email;
    string Number;
    cout<<"Adding anew doctor to the given list"<<endl;
    cout<<"Name of the doctor:";
    getline(cin>>ws, Name);
    cout<<"Department of the doctor:";
    getline(cin>>ws,Department);
    cout<<"Type of employment:";
    getline(cin>>ws,Type);
    cout<<"Period of availability:";
    getline(cin>>ws,Period);
    cout<<"Feedback Rating:";
    getline(cin>>ws,Feedback);
    cout<<"Phone No:";
    getline(cin>>ws,Phone);
    cout<<"Email Id:";
    getline(cin>>ws,Email);
    cout<<"Number of patients:";
    getline(cin>>ws,Number);
    if(NameSearch(first,Name)==NULL)
    SortedInsert(first,Name,Department,Type,Period,Feedback,Phone,Email,Number);
    Display(first);
    cout<<"Delete:";
    getline(cin>>ws, Name);
    Display(first);
    Delete(first,Name);
    Display(first);
    cout<<"Update:";
    getline(cin>>ws, Name);
    Update(Name);
    Display(first);
    Search();
    cout<<"Appointment:Enter Department of doctor you need"<<endl;
    getline(cin>>ws, Department);
    SearchDepartment(first,Department);
    cout<<"Enter Name of doctor you want"<<endl;
    getline(cin>>ws, Name);
    cout<<"Appointment Done"<<endl<<"Appointed Doctor is"<<endl;
    SearchName(first,Name);
    cout<<"Enter feedback rating"<<endl;
    getline(cin>>ws, Feedback);
    struct Node *t;
    t=NameSearch(first,Name);
    int feedback=stoi(t->Feedback);
    int number=stoi(t->Number);
    int newfeedback=stoi(Feedback);
    float calc=(feedback*number+newfeedback)/(float)(number+1);
    t-> Feedback=to_string(calc);
    t-> Number=to_string(number + 1);
    cout<<"Data of Doctor after updating feedback and no.of patients"<<endl;
    SearchName(first,Name);
    return 0;
}
