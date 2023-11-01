do
for


//do-while文
do{
    printf("Hello World");
}while(a < 5);

//解析結果
{
   "type": "Program",
   "body": [
      [
         {
            "type": "doStatement",
            "funcname": "do",
            "block": {
               "type": "block",
               "multistmt": [
                  [
                     {
                        "type": "function",
                        "name": "printf",
                        "parameter": [
                           [],
                           [
                              null,
                              {
                                 "type": "Literal",
                                 "value": "Hello World",
                                 "class": "String"
                              }
                           ],
                           []
                        ]
                     },
                     ";"
                  ]
               ]
            },
            "whilestmt": {
               "type": "whileStatement",
               "funcname": "while",
               "condition": {
                  "type": "BinaryExpression",
                  "operator": "<",
                  "left": {
                     "type": "Identifier",
                     "name": "a"
                  },
                  "right": {
                     "type": "Literal",
                     "value": 5,
                     "class": "Number"
                  }
               }
            }
         },
         ";"
      ]
   ]
}

//for文
for(int a = 0;a < 5;a++){
    printf("Hello World");
}

//解析結果
{
   "type": "Program",
   "body": [
      [
         {
            "type": "ForStatement",
            "funcname": "for",
            "InitializeStatement": {
               "type": "variable",
               "model": "int",
               "expr": {
                  "type": "AssignmentExpression",
                  "operator": "=",
                  "left": {
                     "type": "Identifier",
                     "name": "a"
                  },
                  "right": {
                     "type": "Literal",
                     "value": 0,
                     "class": "Number"
                  }
               }
            },
            "condition": {
               "type": "BinaryExpression",
               "operator": "<",
               "left": {
                  "type": "Identifier",
                  "name": "a"
               },
               "right": {
                  "type": "Literal",
                  "value": 5,
                  "class": "Number"
               }
            },
            "ChangeExpression": [
               {
                  "type": "ChangeExpression",
                  "Operator": "++",
                  "left": {
                     "type": "Identifier",
                     "name": "a"
                  },
                  "right": 1
               }
            ],
            "block": {
               "type": "block",
               "multistmt": [
                  [
                     {
                        "type": "function",
                        "name": "printf",
                        "parameter": [
                           [],
                           [
                              null,
                              {
                                 "type": "Literal",
                                 "value": "Hello World",
                                 "class": "String"
                              }
                           ],
                           []
                        ]
                     },
                     ";"
                  ]
               ]
            }
         },
         null
      ]
   ]
}


//for文
for(int a;a < 5;a++){
    printf("Hello World");
}

//解析結果
{
   "type": "Program",
   "body": [
      [
         {
            "type": "ForStatement",
            "funcname": "for",
            "InitializeStatement": {
               "type": "variable",
               "model": "int",
               "value": [
                  {
                     "type": "Identifier",
                     "name": "a"
                  },
                  []
               ]
            },
            "condition": {
               "type": "BinaryExpression",
               "operator": "<",
               "left": {
                  "type": "Identifier",
                  "name": "a"
               },
               "right": {
                  "type": "Literal",
                  "value": 5,
                  "class": "Number"
               }
            },
            "ChangeExpression": [
               {
                  "type": "ChangeExpression",
                  "Operator": "++",
                  "left": {
                     "type": "Identifier",
                     "name": "a"
                  },
                  "right": 1
               }
            ],
            "block": {
               "type": "block",
               "multistmt": [
                  [
                     {
                        "type": "function",
                        "name": "printf",
                        "parameter": [
                           [],
                           [
                              null,
                              {
                                 "type": "Literal",
                                 "value": "Hello World",
                                 "class": "String"
                              }
                           ],
                           []
                        ]
                     },
                     ";"
                  ]
               ]
            }
         },
         null
      ]
   ]
}

//main関数と関数定義
#include<stdio.h>

void func(int age){
    printf("私は%d歳です",age);
}

int main(void){
    int age = 22;
    func(age);
    return 0;
}

//解析結果
{
   "type": "Program",
   "body": [
      {
         "type": "Include",
         "standardheader": "stdio.h"
      },
      [
         {
            "type": "function",
            "return value": "void",
            "name": "func",
            "parameter": [
               [],
               {
                  "type": "variable",
                  "model": "int",
                  "value": [
                     {
                        "type": "Identifier",
                        "name": "age"
                     },
                     []
                  ]
               },
               []
            ],
            "block": {
               "type": "block",
               "multistmt": [
                  [
                     {
                        "type": "function",
                        "name": "printf",
                        "parameter": [
                           [],
                           [
                              null,
                              {
                                 "type": "Literal",
                                 "value": "私は%d歳です",
                                 "class": "String"
                              }
                           ],
                           [
                              [
                                 ",",
                                 [],
                                 [
                                    null,
                                    {
                                       "type": "Identifier",
                                       "name": "age"
                                    }
                                 ]
                              ]
                           ]
                        ]
                     },
                     ";"
                  ]
               ]
            }
         },
         null
      ],
      {
         "type": "mainfunction",
         "block": {
            "type": "block",
            "multistmt": [
               [
                  {
                     "type": "variable",
                     "model": "int",
                     "expr": {
                        "type": "AssignmentExpression",
                        "operator": "=",
                        "left": {
                           "type": "Identifier",
                           "name": "age"
                        },
                        "right": {
                           "type": "Literal",
                           "value": 22,
                           "class": "Number"
                        }
                     }
                  },
                  ";"
               ],
               [
                  {
                     "type": "function",
                     "name": "func",
                     "parameter": [
                        [],
                        [
                           null,
                           {
                              "type": "Identifier",
                              "name": "age"
                           }
                        ],
                        []
                     ]
                  },
                  ";"
               ],
               [
                  {
                     "type": "returnStatement",
                     "value": {
                        "type": "Literal",
                        "value": 0,
                        "class": "Number"
                     }
                  },
                  ";"
               ]
            ]
         }
      }
   ]
}

//標準入出力

scanf("%d", &a);
printf("%d\n", a);

//解析結果
{
   "type": "Program",
   "body": [
      [
         {
            "type": "function",
            "name": "scanf",
            "parameter": [
               [],
               [
                  null,
                  {
                     "type": "Literal",
                     "value": "%d",
                     "class": "String"
                  }
               ],
               [
                  [
                     ",",
                     [
                        " "
                     ],
                     [
                        "&",
                        {
                           "type": "Identifier",
                           "name": "a"
                        }
                     ]
                  ]
               ]
            ]
         },
         ";"
      ],
      [
         {
            "type": "function",
            "name": "printf",
            "parameter": [
               [],
               [
                  null,
                  {
                     "type": "Literal",
                     "value": "%d\n",
                     "class": "String"
                  }
               ],
               [
                  [
                     ",",
                     [
                        " "
                     ],
                     [
                        null,
                        {
                           "type": "Identifier",
                           "name": "a"
                        }
                     ]
                  ]
               ]
            ]
         },
         ";"
      ]
   ]
}

//変数宣言いろいろ
int a;
int b = 0;
float c;
float d = 0.0;
double e;
double f = 0.0;
char g;
char h = 'a';
int *pointer;
int* pointer2;
int *pointer3 = &a;
int* pointer4 = &a;
int array[3];
int array2[2] = {1,2};
int array2d[2][2] = {{1,2},{3,4}};

//解析結果
{
   "type": "Program",
   "body": [
      [
         {
            "type": "variable",
            "model": "int",
            "value": [
               {
                  "type": "Identifier",
                  "name": "a"
               },
               []
            ]
         },
         ";"
      ],
      [
         {
            "type": "variable",
            "model": "int",
            "expr": {
               "type": "AssignmentExpression",
               "operator": "=",
               "left": {
                  "type": "Identifier",
                  "name": "b"
               },
               "right": {
                  "type": "Literal",
                  "value": 0,
                  "class": "Number"
               }
            }
         },
         ";"
      ],
      [
         {
            "type": "variable",
            "model": "float",
            "value": [
               {
                  "type": "Identifier",
                  "name": "c"
               },
               []
            ]
         },
         ";"
      ],
      [
         {
            "type": "variable",
            "model": "float",
            "expr": {
               "type": "AssignmentExpression",
               "operator": "=",
               "left": {
                  "type": "Identifier",
                  "name": "d"
               },
               "right": {
                  "type": "Literal",
                  "value": 0,
                  "class": "Number"
               }
            }
         },
         ";"
      ],
      [
         {
            "type": "variable",
            "model": "double",
            "value": [
               {
                  "type": "Identifier",
                  "name": "e"
               },
               []
            ]
         },
         ";"
      ],
      [
         {
            "type": "variable",
            "model": "double",
            "expr": {
               "type": "AssignmentExpression",
               "operator": "=",
               "left": {
                  "type": "Identifier",
                  "name": "f"
               },
               "right": {
                  "type": "Literal",
                  "value": 0,
                  "class": "Number"
               }
            }
         },
         ";"
      ],
      [
         {
            "type": "variable",
            "model": "char",
            "value": [
               {
                  "type": "Identifier",
                  "name": "g"
               },
               []
            ]
         },
         ";"
      ],
      [
         {
            "type": "variable",
            "model": "char",
            "expr": {
               "type": "AssignmentExpression",
               "operator": "=",
               "left": {
                  "type": "Identifier",
                  "name": "h"
               },
               "right": {
                  "type": "Character",
                  "word": "a"
               }
            }
         },
         ";"
      ],
      [
         {
            "type": "pointer",
            "model": "int",
            "value": [
               [
                  "*"
               ],
               {
                  "type": "Identifier",
                  "name": "pointer"
               },
               []
            ]
         },
         ";"
      ],
      [
         {
            "type": "pointer",
            "model": "int",
            "value": {
               "type": "Identifier",
               "name": "pointer2"
            }
         },
         ";"
      ],
      [
         {
            "type": "pointer",
            "model": "int",
            "expr": {
               "type": "AssignmentExpression",
               "operator": "=",
               "left": [
                  [],
                  null,
                  {
                     "type": "Identifier",
                     "name": "pointer3"
                  },
                  null
               ],
               "right": [
                  "&",
                  [],
                  {
                     "type": "Identifier",
                     "name": "a"
                  }
               ]
            }
         },
         ";"
      ],
      [
         {
            "type": "pointer",
            "model": "int",
            "expr": {
               "type": "AssignmentExpression",
               "operator": "=",
               "left": [
                  [],
                  null,
                  {
                     "type": "Identifier",
                     "name": "pointer4"
                  },
                  null
               ],
               "right": [
                  "&",
                  [],
                  {
                     "type": "Identifier",
                     "name": "a"
                  }
               ]
            }
         },
         ";"
      ],
      [
         {
            "type": "array",
            "model": "int",
            "value": {
               "type": "Identifier",
               "name": "array"
            },
            "length": {
               "type": "Literal",
               "value": 3,
               "class": "Number"
            }
         },
         ";"
      ],
      [
         {
            "type": "array",
            "model": "int",
            "length": {
               "type": "Literal",
               "value": 2,
               "class": "Number"
            },
            "left": {
               "type": "Identifier",
               "name": "array2"
            },
            "right": [
               [],
               [
                  null,
                  {
                     "type": "Literal",
                     "value": 1,
                     "class": "Number"
                  }
               ],
               [
                  [
                     ",",
                     [],
                     [
                        null,
                        {
                           "type": "Literal",
                           "value": 2,
                           "class": "Number"
                        }
                     ]
                  ]
               ]
            ]
         },
         ";"
      ],
      [
         {
            "type": "array",
            "model": "int",
            "row": {
               "type": "Literal",
               "value": 2,
               "class": "Number"
            },
            "column": {
               "type": "Literal",
               "value": 2,
               "class": "Number"
            },
            "left": {
               "type": "Identifier",
               "name": "array2d"
            },
            "right": [
               "{",
               [
                  [],
                  [
                     null,
                     {
                        "type": "Literal",
                        "value": 1,
                        "class": "Number"
                     }
                  ],
                  [
                     [
                        ",",
                        [],
                        [
                           null,
                           {
                              "type": "Literal",
                              "value": 2,
                              "class": "Number"
                           }
                        ]
                     ]
                  ]
               ],
               "}",
               [
                  [
                     ",",
                     "{",
                     [
                        [],
                        [
                           null,
                           {
                              "type": "Literal",
                              "value": 3,
                              "class": "Number"
                           }
                        ],
                        [
                           [
                              ",",
                              [],
                              [
                                 null,
                                 {
                                    "type": "Literal",
                                    "value": 4,
                                    "class": "Number"
                                 }
                              ]
                           ]
                        ]
                     ],
                     "}"
                  ]
               ]
            ]
         },
         ";"
      ]
   ]
}
