//
//  SUUpdaterPrivate.h
//  Sparkle
//
//  Created by Andy Matuschak on 5/9/11.
//  Copyright 2011 Andy Matuschak. All rights reserved.
//

#import "SUUpdaterDelegate.h"

@protocol SUUpdaterPrivate <NSObject>

@property (unsafe_unretained) IBOutlet id<SUUpdaterDelegate> delegate;

@property (nonatomic, copy) NSString *userAgentString;

@property (copy) NSDictionary *httpHeaders;

@property (nonatomic, copy) NSString *decryptionPassword;

@property (strong, readonly) NSBundle *sparkleBundle;

@end


@protocol SUUpdaterDelegatePrivate <SUUpdaterDelegate>

- (void)updaterWillStartUpdateProcess:(SUUpdater *)updater;
- (void)updaterDidEndUpdateProcess:(SUUpdater *)updater;

@end
