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
        */