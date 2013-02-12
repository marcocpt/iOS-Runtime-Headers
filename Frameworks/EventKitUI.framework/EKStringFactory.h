/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKStringFactory : NSObject {
    struct __CFDateFormatter { } *_abbrevDayFormatter;
    struct __CFDateFormatter { } *_customFormatter;
    struct __CFDateFormatter { } *_dayFormatter;
    struct __CFDateFormatter { } *_standardTimeFormatter;
    struct __CFDateFormatter { } *_timeFormatter;
}

+ (id)sharedInstance;

- (struct __CFDateFormatter { }*)_customFormatter;
- (id)_dayStringForDate:(double)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 lowercase:(BOOL)arg4;
- (void)_invalidateFormatters;
- (void)_localeChanged:(id)arg1;
- (id)_stringForDateTime:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(struct __CFTimeZone { }*)arg2;
- (id)_stringForDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(BOOL)arg3 lowerCase:(BOOL)arg4;
- (id)_stringForDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(BOOL)arg3;
- (id)_stringForTime:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (id)_timeStringForDate:(double)arg1;
- (struct __CFDateFormatter { }*)abbreviatedDayFormatter;
- (id)abbreviatedStringForDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 withLongFormatString:(id)arg2;
- (id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3;
- (id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 standalone:(BOOL)arg3 shortFormat:(BOOL)arg4;
- (id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2;
- (struct __CFDateFormatter { }*)dayFormatter;
- (void)dealloc;
- (id)init;
- (struct __CFDateFormatter { }*)standardTimeFormatter;
- (id)stringForDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 withLongFormatString:(id)arg2 lowercase:(BOOL)arg3;
- (id)stringForDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 withLongFormatString:(id)arg2;
- (struct __CFDateFormatter { }*)timeFormatter;
- (id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2;

@end