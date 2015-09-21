/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFRemoteStoreSizeEngine.h>

@class MFIMAPAccount, NSArray, NSMutableDictionary, NSMutableSet;

@interface MFIMAPSizeEngine : MFRemoteStoreSizeEngine
{
    unsigned long long _workerThreadCount;
    NSMutableDictionary *_mailboxesByQuotaRoot;
    NSMutableSet *_quotasToFetch;
    NSMutableSet *_observedIMAPMailboxes;
    NSMutableSet *_observedIMAPQuotaRoots;
    long long _quotaStatus;
}

@property(nonatomic) long long quotaStatus; // @synthesize quotaStatus=_quotaStatus;
- (void).cxx_destruct;
- (BOOL)mailbox:(id)arg1 usesQuotaName:(id)arg2;
- (id)copyMailboxesForQuotaName:(id)arg1;
- (id)usageForQuotaName:(id)arg1;
@property(readonly, copy) NSArray *quotaNames;
- (BOOL)shouldStartWorkerThread;
- (void)_runWorkerThread;
- (void)_getSizeForMailbox:(id)arg1;
- (void)_mailboxBecameInvalid:(id)arg1;
- (void)_changeQuotaRoots:(id)arg1 forMailbox:(id)arg2;
- (BOOL)_changeUsageInfo:(CDStruct_1dee9796 *)arg1 forMailbox:(id)arg2 refetchQuotas:(BOOL)arg3;
- (void)_addQuotaRootsFromMailbox:(id)arg1;
- (void)_addUsageInfoFromMailbox:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MFIMAPAccount *account; // @dynamic account;

@end
