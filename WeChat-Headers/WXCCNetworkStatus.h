//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface WXCCNetworkStatus : MMService <MMService>
{
    unsigned int m_uiLastStatus;
    id <WXCNetworkStatusDelegate> m_delNetworkStatus;
}

+ (_Bool)isSimCardSupport3GPlus;
+ (id)getCarrierName;
+ (id)descriptionForNetType:(int)arg1;
- (_Bool)isReachable;
- (int)getNetworkType;
- (_Bool)isOnWifi;
- (_Bool)isOnWWan;
- (void)ChangeReach;
- (void)Stop;
- (void)Start:(id)arg1;
- (void)PingReach;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
