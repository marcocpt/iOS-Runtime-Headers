/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary, IMMessage, NSString, NSDate, NSMutableArray, IMAccount;



@interface IMChat : NSObject <IMSecureObject>
{
    NSString *_guid;
    IMAccount *_account;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSMutableArray *_chatItems;
    NSMutableDictionary *_unfinishedChatItemMap;
    NSMutableArray *_participants;
    NSMutableDictionary *_participantStates;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    NSInteger _securityLevel;
    NSUInteger _overallChatStatus;
    NSInteger _joinState;
    unsigned char _style;
    NSInteger _directConnectionStatus;
    double _joinedTimeInterval;
    NSUInteger _chatItemChangeCount;
    BOOL _isFirstMessageInvitation;
    BOOL _wasInvitationHandled;
    BOOL _disabledEncryption;
    BOOL _suppressEncryptionChatItems;
    BOOL _didSendAFinishedMessage;
    BOOL _shouldAnnouncePeopleJoin;
}

@property(readonly) NSString *chatIdentifier;
@property(readonly) BOOL canHaveMultipleParticipants;
@property(readonly) NSUInteger overallChatStatus;
@property(readonly) NSString *roomNameWithoutSuffix;
@property(readonly) BOOL hasUnhandledInvitation;
@property NSInteger securityLevel;
@property(readonly) BOOL canBeSecure;
@property(retain) IMHandle *recipient;
@property(readonly) NSInteger directConnectionStatus;
@property(retain) IMMessage *invitationForPendingParticipants;
@property(readonly) NSInteger joinState;
@property BOOL suppressEncryptionChatItems; /* unknown property attribute: SsetSupressEncryptionChatItems: */
@property(readonly) NSDate *dateModified;
@property(readonly) NSDate *dateCreated;
@property(readonly) NSString *roomName;
@property(readonly) unsigned char chatStyle;
@property(readonly) NSArray *participants;
@property(readonly) IMAccount *account;
@property(readonly) NSString *guid;
@property(readonly) NSArray *chatItems;


- (id)recipient;
- (void)setRecipient:(id)arg1;
- (id)account;
- (BOOL)canBeSecure;
- (id)participants;
- (id)dateCreated;
- (void)declineInvitation;
- (void)acceptInvitation;
- (void)setSecurityLevel:(NSInteger)arg1;
- (NSInteger)securityLevel;
- (id)guid;
- (void)join;
- (void)clear;
- (id)init;
- (void)dealloc;
- (void)sendMessage:(id)arg1;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 directConnectionStatus:(NSInteger)arg4 roomName:(id)arg5 chatItems:(id)arg6 participants:(id)arg7;
- (void)_beginChatItemChanges;
- (void)_endChatItemChanges;
- (BOOL)_shouldDisplayInitialTypingIndicator;
- (id)_newInitialTypingIndicatorChatItem;
- (id)_dateStampForChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)_timeStampForChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_postChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_replaceChatItem:(id)arg1 withChatItem:(id)arg2;
- (NSUInteger)_insertChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_removeChatItem:(id)arg1 andTimestamp:(BOOL)arg2;
- (void)_appendChatItem:(id)arg1;
- (id)_newHeaderChatItemWithDate:(id)arg1;
- (void)_updateHeaderChatItem;
- (void)_buildInitialChatItems:(id)arg1;
- (void)_buildChatItemForDisconnectOrLogout;
- (void)_buildChatItemForDirectConnectionStatus:(NSInteger)arg1;
- (void)_buildChatItemForDecidingHandleWentOffline:(id)arg1;
- (void)_buildChatItemForOverallChatStatusFrom:(NSUInteger)arg1 to:(NSUInteger)arg2;
- (void)_buildChatItemForParticipantState:(NSInteger)arg1 handle:(id)arg2;
- (void)_buildChatItemForNewRecipient:(id)arg1 isNewAccount:(BOOL)arg2;
- (void)_buildChatItemForErrorMessage:(id)arg1;
- (void)_buildChatItemForSecurityLevelChangeFrom:(NSInteger)arg1 to:(NSInteger)arg2;
- (void)_removeInitialTypingIndicator;
- (void)_insertArchivedChatItems:(id)arg1;
- (BOOL)shouldInsertChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)shouldAppendTimestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)shouldAppendDatestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (void)processChatItem:(id)arg1;
- (void)mark;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_accountLoggedOut:(id)arg1;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_setParticipantState:(NSInteger)arg1 forHandle:(id)arg2;
- (void)_updateSecurityLevelForMessage:(id)arg1;
- (void)_handleIncomingMessage:(id)arg1;
- (void)_setJoinState:(NSInteger)arg1;
- (void)_setDirectConnectionStatus:(NSInteger)arg1;
- (void)_participant:(id)arg1 statusChanged:(NSInteger)arg2;
- (void)_showErrorMessage:(id)arg1;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_fixLastStatusMessageIfNecessary;
- (id)participantsWithState:(NSUInteger)arg1;
- (NSInteger)stateForParticipant:(id)arg1;
- (id)chatIdentifier;
- (id)convertToChatStyle:(unsigned char)arg1;
- (BOOL)canHaveMultipleParticipants;
- (NSUInteger)overallChatStatus;
- (id)roomNameWithoutSuffix;
- (BOOL)hasUnhandledInvitation;
- (BOOL)_isDuplicate:(id)arg1;
- (id)allChatProperties;
- (id)valueForChatProperty:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (id)allPropertiesOfParticipant:(id)arg1;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (void)attemptDirectConnection;
- (NSInteger)directConnectionStatus;
- (void)leave;
- (void)_addParticipant:(id)arg1;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)addPendingParticipants:(id)arg1;
- (id)invitationForPendingParticipants;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (NSInteger)joinState;
- (BOOL)suppressEncryptionChatItems;
- (void)setSupressEncryptionChatItems:(BOOL)arg1;
- (id)dateModified;
- (id)roomName;
- (unsigned char)chatStyle;
- (id)chatItems;
- (BOOL)_shouldAnnouncePeopleJoin;

@end