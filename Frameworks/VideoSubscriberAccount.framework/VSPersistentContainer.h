/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPersistentContainer : NSObject {
    int  _modelVersion;
    NSPersistentContainer * _persistentContainer;
    NSManagedObjectContext * _viewContext;
}

@property (nonatomic, readonly) int modelVersion;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (nonatomic, retain) NSManagedObjectContext *viewContext;

+ (id)defaultDirectoryURL;

- (void).cxx_destruct;
- (id)developerIdentityProviderFetchRequest;
- (id)init;
- (id)initWithModelVersion:(int)arg1;
- (id)insertDeveloperIdentityProviderInContext:(id)arg1;
- (int)modelVersion;
- (void)performBlock:(id /* block */)arg1;
- (id)persistentContainer;
- (void)setPersistentContainer:(id)arg1;
- (void)setViewContext:(id)arg1;
- (id)viewContext;

@end