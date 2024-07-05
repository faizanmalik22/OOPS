/*Define a class Actor with name, age as instance member variables and setter,getter as instance method
  Define a class TVActor as a derived class of Actor with instance variable to store number of Tv projects done 
  or running and define setter,getter, also define setTvActor() and showTvActor(), Define a class MovieActor
  as a derived class of Actor with instance variable to store number of movies doe or running and define setter,
  getter Also Define setMovieActor() and showMovieActor().
  Derive a class AllScreenActor from TvActor and MovieActor. Define a method to setActorData() and showActorData()
  */
 #include<iostream>
 using namespace std;
 class Actor
 {
    private:
    string name;
    int age;
    public:
    void set_name(string name)
    {
        this->name=name;
    }
    
    void set_Age(int age)
    {
        this->age=age;
    }

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
 };

 class TvActor:public Actor
 {
    private:
    int project_done;
    int project_running;
    public:
      void setPoject_Completed(int project_done)
      {
         this->project_done=project_done;
      }

      void set_poject_running(int project_running)
      {
        this->project_running=project_running;
      }

    int get_completed_project()
    {
        return project_done;
    }

    int get_running_project()
    {
        return project_running;
    }

    void setTvActor(string name,int age,int project_done,int project_running)
    {
        //("_")
       set_name(name);//this->name{can not access directly private member of another class so, we cn't acces name variable here bcz its private so we have to use member function of that class
       set_Age(age);
       this->project_done=project_done;//set_project_completed(project_done);
       this->project_running=project_running;
    }

    void showActor()
    {
        cout<<"name="<<getName()<<" ";//getname return current object name
        cout<<"age="<<getAge()<<" ";//return age of current/caller object
        cout<<"projectDone="<<get_completed_project()<<" projectrunning="<<project_running<<endl;
    }

 };

//Heirarchical inheretnece(ek baap multiple bete("_"))
 class MovieActor:public Actor
 {
     private:
     int movie_completed;
     int movie_due;
     public:
     void setMovie_completed(int movie_completed)
     {
        this->movie_completed=movie_completed;
     }
     void set_Movies_due(int movies_due)
     {
        this->movie_due=movie_due;
     }

     int get_How_many_movies_Completed()
     {
        return movie_completed;
     }
      int get_How_many_movies_due()
     {
        return movie_due;
     }

     //
     void setMovieActor(string name,int age,int movie_completed,int movie_due)
     {
        set_name(name);
        set_Age(age);
        this->movie_completed=movie_completed;
        this->movie_due=movie_due;
    }

    void showMovieActor()
    {
        cout<<"name="<<getName();
        cout<<" age="<<getAge();
        cout<<"movies_completed="<<movie_completed<<" movies_due="<<movie_due<<endl;
    }
 };

//multiple inheritance    (hybrid inheritance)("_")
 class AllScreenActor:public TvActor,public MovieActor
 { 
    public:
    void setActorData()
    {

    }

    void showActorData()
    {

    }
 };

 //Sir
 class Actor{
    private:
        string name;
        int age;
    public:
        void setName(string n){
            name=n;
        }
        void setAge(int a){
            age=a;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }   
};
class TVActor:virtual public Actor
{
    private:
        int tv_projects_count;
    public:
        void setTvProjectsCount(int c)
        {
            tv_projects_count=c;
        }
        int getTvProjectsCount()
        {
            return tv_projects_count;
        }
        void setTvActor(string n,int a, int projects){
                setName(n);
                setAge(a);
                setTvProjectsCount(projects);

        }
        void showTvActor()
        {
            cout<<endl;
            cout<<getName()<<endl;
            cout<<getAge()<<endl;
            cout<<getTvProjectsCount();
        }

};
class MovieActor:virtual public Actor //because of hybrid inheritance
{
    private:
        int movieCount;
    public:
        void setMovieCount(int c){
            movieCount=c;
        }
        int getMovieCount(){
            return movieCount;
        }
        void setMovieActor(string n,int a,int c)
        {
            setName(n);
            setAge(a);
            setMovieCount(c);
        }
        void showMovieActor(){
            cout<<endl;
            cout<<getName()<<endl;
            cout<<getAge()<<endl;
            cout<<getMovieCount();
        }
};
class AllScreenActor:public TVActor, public MovieActor
{
    public:
        void setActorData(string n,int a, int tc,int mc){
            setName(n);//Error without using virtual keyword(confused konse wale parent ka chlau{q ki inherit hokr dono me hai})
            setAge(a);//Error without using virtual keyword...
            setTvProjectsCount(tc);
            setMovieCount(mc);
        }
        void showActorData(){
            cout<<endl;
            cout<<getName()<<endl;
            cout<<getAge()<<endl;
            cout<<getTvProjectsCount()<<endl;
            cout<<getMovieCount();
        }
};

