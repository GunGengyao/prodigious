#include<cstdio>
#include<cstdlib>
#define I_LIMIT 10000
#define F_LIMIT 10000
class Prodigious{
private:
    short i[I_LIMIT];
    short f[F_LIMIT];
public:
    Prodigious();
    Prodigious(double input);
    ~Prodigious();
    void input(double input);
    double output();
    void print();
    Prodigious operator +(Prodigious input);
    Prodigious operator -(Prodigious input);
    Prodigious operator *(Prodigious input); 
    Prodigious operator /(Prodigious input);
};
Prodigious::Prodigious(){
    for(int i=0; i<I_LIMIT; i++){
        this->i[i]=-1;
    }
    for(int i=0; i<F_LIMIT; i++){
        this->f[i]=-1;
    }
    
}
Prodigious::Prodigious(double input){
    for(int i=0; i<I_LIMIT; i++){
        this->i[i]=-1;
    }
    for(int i=0; i<F_LIMIT; i++){
        this->f[i]=-1;
    }
    int in;
    in=(int)input;
    double cache = input-in;
    for(int k=0; in!=0; k++){
        this->i[k]=in%10;
        in-=this->i[k];
        in/=10;
    }
    for(int k=0; cache!=0; k++){
        this->f[k]=(int)(cache*10);
        cache=cache*10-this->f[k];
    }
}
Prodigious::~Prodigious(){}
void Prodigious::input(double input){
    for(int i=0; i<I_LIMIT; i++){
        this->i[i]=-1;
    }
    for(int i=0; i<F_LIMIT; i++){
        this->f[i]=-1;
    }
    int in;
    in=(int)input;
    double cache = input-in;
    for(int k=0; in!=0; k++){
        this->i[k]=in%10;
        in-=this->i[k];
        in/=10;
    }
    for(int k=0; cache!=0; k++){
        this->f[k]=(int)(cache*10);
        cache=cache*10-this->f[k];
    }

}
void Prodigious::print(){
    for(int k=I_LIMIT-1; k>=0; k--){
        if(this->i[k]!=-1)
            printf("%d", this->i[k]);
    }
    printf(".");
    for(int k=0; this->f[k]!=-1; k++){
        printf("%d", this->f[k]);
    }
}
double Prodigious::output(){
    double ans=0;

    return ans;
}
Prodigious Prodigious::operator+(Prodigious input){
    Prodigious ans;
    return ans;
}
Prodigious Prodigious::operator-(Prodigious input){
    Prodigious ans;
    return ans;
}
Prodigious Prodigious::operator*(Prodigious input){
    Prodigious ans;
    return ans;
}
Prodigious Prodigious::operator/(Prodigious input){
    Prodigious ans;
    return ans;
}
int main(){
    printf("test\n");
    Prodigious t(123456.54321);
    t.print();
    printf("\n");
    return 0;
}
