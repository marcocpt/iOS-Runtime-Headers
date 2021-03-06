/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability> {
    BOOL  _available;
    <CNUIIDSHandle> * _handle;
}

@property (getter=isAvailable, nonatomic, readonly) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNUIIDSHandle> *handle;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)handle;
- (id)initWithHandle:(id)arg1 available:(BOOL)arg2;
- (BOOL)isAvailable;

@end
