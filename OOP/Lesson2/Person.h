struct Person {
private:
    char *name;
    char *surname;
    int age;

public:
    Person();
    Person(char*, char*, int);
    Person(char*, char*, int, float);

    void change_name(char*);

    char *getName() const;
    char *getSurname() const;
    int getAge() const;

    void setName(char *name);
    void setSurname(char *surname);
    void setAge(int age);
};