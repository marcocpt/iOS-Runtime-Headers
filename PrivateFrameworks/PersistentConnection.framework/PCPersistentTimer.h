/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class PCPowerManager, NSDate, NSTimer;



@interface PCPersistentTimer : NSObject <PCPowerManagerDelegate>
{
    NSDate *_fireDate;
    double _lastWakeTime;
    NSTimer *_timer;
    PCPowerManager *_powerManager;
    id _fireTarget;
    SEL _fireSelector;
}


- (void)dealloc;
- (id)fireDate;
- (id)initScheduledWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;
- (void)_timerFired:(id)arg1;
- (id)userInfo;
- (void)invalidate;
- (void)systemSleepImminent;
- (void)systemPoweredOn;

@end