    int main()
    {
      void* pParser = ParseAlloc (malloc);
      Parse (pParser, INTEGER, 1);
      Parse (pParser, PLUS, 0);
      Parse (pParser, INTEGER, 2);
      Parse (pParser, 0, 0);
      ParseFree(pParser, free );
     }
