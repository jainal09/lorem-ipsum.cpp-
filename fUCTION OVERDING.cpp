/*  class Base
{
    ...........
    public:
    void getData(); <-----------------------  
    {                                      .
        ... ... ...                        .
    }                                      .
};                                         .
class Derived: public Base                 .
{                                          .    
    .. .. ..                               .
    public:                                .
    void getData(); <---------.            . This function 
    {                         .            . will not be 
        ... ... ...           .            . called.
    }                         .            .
};                            . Function   .
                              .   Call     .  
int main()                    .            .
{                             .            .
    Derived obj;              .            .
                 -------------.            .
    obj.getData(); .........................
}
*/

/* 
        class Base
        {
            ... .. ...
            public:
          void getData(); <<---------------------.
            {                                    . 
             ... .. ...                          . 
            }                                    .
        };                                       .  Function
        class Derived: public Base               .  Call2
        {                                        .
            ... .. ...                           . 
        public:                                  .
  .-------------------> void getData();          .
  .      {                                       .
  .          ... .. ...                          .
  .          Base::getData(); ....................         
  .          ... ... ...
  .      }                            Function Call 1
  .      };
  .      int main()
  .      {
  .      Derived obj;               
  .......obj.getData();
        }