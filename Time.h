class Time{
private:	
    int m,h,s;
public:
    void set_time(int=0,int=0,int=0);
    void display();
    void get_time();
    Time subtract(Time);
    Time operator-(Time);
    Time operator-(int);
    void operator++();
};

void Time::set_time(int a,int b,int c){
    if(a>24 || a<0) h=0; else h=a;
    if(b>59 || b<0) m=0; else m=b;
    if(c>59 || c<0) s=0; else s=c;
}

void Time::get_time(){
    cout<<"Input Time(h m s)";
    cin>>h>>m>>s;
    set_time(h,m,s);
}

void Time::display(){
    cout<<setfill('0')<<setw(2)<<h<<":";
    cout<<setfill('0')<<setw(2)<<m<<":";
    cout<<setfill('0')<<setw(2)<<s<<endl;
}

Time Time::subtract(Time t1){
        Time t3; //t3=t2-t1
        t3.s=s-t1.s;
        t3.m=m-t1.m;
        t3.h=h-t1.h;

        if(t3.s<0){
            t3.m=t3.m-1;
            t3.s=t3.s+60;
        }
 
        if(t3.m<0){
            t3.h=t3.h-1;
            t3.m=t3.m+60;
        }

        if(t3.h<0){
            t3.h=t3.h+24;
        }

        return t3;
}

Time Time::operator-(Time t1){
        Time t3; //t3=t2-t1
        t3.s=s-t1.s;
        t3.m=m-t1.m;
        t3.h=h-t1.h;

        if(t3.s<0){
            t3.m=t3.m-1;
            t3.s=t3.s+60;
        }
 
        if(t3.m<0){
            t3.h=t3.h-1;
            t3.m=t3.m+60;
        }

        if(t3.h<0){
            t3.h=t3.h+24;
        }

        return t3;
}

Time Time::operator-(int x){
    Time t3;
    t3.m=t3.m-x;
    if(t3.m<0){
        t3.h=t3.h-1;
        t3.m=t3.m+60;
    }
    return t3;
}

void Time::operator++(){
    Time t;
    t.m+=10;
}

/* WEEK 10 >>>

//create 3 functions

//1.  getTime function
void getTime(struct Time &t){
    cout<<"Input Time(h m s)";
    cin>>t.h>>t.m>>t.s;
};

//2. subtract fuctions
struct Time subtract(struct Time t2 , struct Time t1){
        struct Time t3; //t3=t2-t1
        t3.s=t2.s-t1.s;
        t3.m=t2.m-t1.m;
        t3.h=t2.h-t1.h;

        if(t3.s<0){
            t3.m=t3.m-1;
            t3.s=t3.s+60;
        }
 
        if(t3.m<0){
            t3.h=t3.h-1;
            t3.m=t3.m+60;
        }

        if(t3.h<0){
            t3.h=t3.h+24;
        }

        return t3;
};

//3. display functions
void display(struct Time t3){
     cout<<setfill('0')<<setw(2)<<t3.h<<":";
     cout<<setfill('0')<<setw(2)<<t3.m<<":";
     cout<<setfill('0')<<setw(2)<<t3.s<<endl;
};
*/