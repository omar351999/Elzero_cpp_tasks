/*
    name        [ Valid | Good Practice ]
    NAME        [ Valid | Bad Practice ]
    1name       [ notValid | Bad ] => start with number ?
    __name      [ valid | Good] => start with underscore  ?
    name@name   [ notValid | bad] => contain special character?
    name10name  [ valid | bad] => not unique name?
    name!name   [ notValid | bad] => contain special character ?
    first_NAME  [ Valid | Bad Practice ] => capital name
    first_name  [ Valid | Good ] => sanke case  ?
    firstName   [ Valid | Good ] => camel case  ?
    first name  [ notValid | bad ] => white space not valid ?
    fn          [ valid | bad] => not unique name?
    public      [ notValid | bad] => reversed word ?
    Public      [ valid | bad] => not unique name & start with capitel letter?
*/