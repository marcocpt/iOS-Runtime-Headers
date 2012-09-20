/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSNumber, NSString;

@interface PFUbiquitySQLCorePeerRange : NSObject  {
    NSString *_owningPeerID;
    NSString *_entityName;
    NSNumber *_rangeStart;
    NSNumber *_rangeEnd;
    NSNumber *_peerStart;
    NSNumber *_peerEnd;
}

@property(readonly) NSString * owningPeerID;
@property(readonly) NSString * entityName;
@property(readonly) NSNumber * rangeStart;
@property(readonly) NSNumber * rangeEnd;
@property(readonly) NSNumber * peerStart;
@property(readonly) NSNumber * peerEnd;


- (id)description;
- (void)dealloc;
- (id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6;
- (id)peerEnd;
- (id)peerStart;
- (id)rangeEnd;
- (id)rangeStart;
- (id)owningPeerID;
- (id)entityName;

@end