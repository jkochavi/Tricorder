#define BACKSPACE  "\xef\x95\x9A"
#define ENTER      "\xef\xA2\xA2"
#define LEFTARROW  "\xef\x81\x93"
#define RIGHTARROW "\xef\x81\x94"

enum {
    LOWERCASE,
    UPPERCASE,
    SPECIALCASE
};

#ifdef __cplusplus
extern "C"
{
#endif

void sendpress(const char * txt, const char * txt2);

void init_keyboard();

#ifdef __cplusplus
}
#endif



