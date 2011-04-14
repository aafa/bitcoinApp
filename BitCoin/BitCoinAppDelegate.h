//
//  BitCoinAppDelegate.h
//  BitCoin
//
//  Created by Ehud Ben-Reuven on 2/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Three20/Three20.h>
@class RPCModel;
@interface BitCoinAppDelegate : NSObject <UIApplicationDelegate> {
	dispatch_queue_t serialQueue, logQueue;
    RPCModel *model;
}
@property (nonatomic, retain) RPCModel* model;
@end
