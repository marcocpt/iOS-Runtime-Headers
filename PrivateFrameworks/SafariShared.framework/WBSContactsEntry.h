/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSContactsEntry : NSObject {
    CNContact * _contact;
}

@property (nonatomic, readonly) CNContact *contact;

+ (BOOL)_isContactsLabel:(id)arg1;
+ (BOOL)_isContactsProperty:(id)arg1;
+ (BOOL)_isValueAStringForContactsProperty:(id)arg1;
+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3;
+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3 atIndex:(unsigned int)arg4;
+ (id)_valueStringForWBSComponent:(id)arg1 inAddress:(id)arg2;
+ (id)_valueStringForWBSComponent:(id)arg1 inInstantMessageAddress:(id)arg2;
+ (BOOL)isWBSProxyProperty:(id)arg1;
+ (id)localizedWBSPropertyOrLabel:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)_numberOfValuesForWBSProperty:(id)arg1;
- (unsigned int)_numberOfValuesForWBSProperty:(id)arg1 andContact:(id)arg2;
- (id)contact;
- (id)fullName;
- (id)initWithContact:(id)arg1;
- (id)valueForWBSProxyProperty:(id)arg1;
- (id)valueStringForWBSProperty:(id)arg1 wbsComponent:(id)arg2 atIndex:(unsigned int)arg3;

@end