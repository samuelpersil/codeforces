s = input()

if s == s.upper():
    print(s.lower())

elif s[0].islower() and (s[1:].isupper() or len(s) == 1):
    print(s.title())

else:
    print(s)