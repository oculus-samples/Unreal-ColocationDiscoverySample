# Colocation Discovery Sample

## Sample Features

This sample provides an example of how to use the new Colocation Discovery API and the Group Anchor Sharing API.

Colocation Discovery allows users to detect advertised sessions when devices are within close physical proximity. This is exemplified with 2 or more headsets. One headset will act as the host and the other headsets can find the host session. The blueprints for Colocation Discovery can be found in the content folder at ColocationDiscovery/Blueprints/Components/BP_SessionManager

Group Sharing allows a user to share an anchor with an arbitrary "group" which is identified via a UUID. This replaces the previous user based anchor sharing that is found in the SharedSpatialAnchors sample. Users can also request the anchors from a group as long as they know the UUID of the group. It is convenient to re-use the UUID generated for the Colocation Discovery Session since it is known to both the host and the user that joins the session. The blueprints for Group Sharing can be found within ColocationDiscovery/Blueprints/Components/BP_SpatialAnchorManagerComponent


## How to Use

### Load the project

First, ensure you have Git LFS installed by running this command:
```sh
git lfs install
```

Then, clone this repo using the "Code" button above, or this command:
```sh
git clone https://github.com/oculus-samples/Unreal-ColocationDiscoverySample
```

### Launch the project in the Unreal Editor using one of the following options.

#### Epic Games Launcher with MetaXR plugin

The easiest way to get started is to use the prebuilt Unreal Engine from the Epic Games Launcher, with MetaXR plugin.

1. Install the [Epic Games Launcher](https://www.epicgames.com/store/en-US/download)
2. In the launcher, install UE5 (recommended).
3. Download and install the MetaXR plugin from the [Unreal Engine 5 Integration download page](https://developer.oculus.com/downloads/package/unreal-engine-5-integration).
4. Launch the Unreal Editor
5. From "Recent Projects", click "Browse" and select `ColocationDiscovery.uproject`

#### Meta fork of Epic’s Unreal Engine

The Meta fork of Epic’s Unreal Engine will give you the most up to date integration of Oculus features. However, you must build the editor from its source.

Follow the instructions on [Accessing Unreal Engine source code on GitHub](https://www.unrealengine.com/en-US/ue-on-github) to obtain:
- an Epic account
- a GitHub account
- authorization to access the Unreal Engine source repository
Disregard instructions on downloading Epic’s Unreal Engine source code as you will be building the Meta fork of Epic’s Unreal Engine source.

Make sure you have Visual Studio installed properly:
- Launch the Visual Studio Installer and click Modify for the Visual Studio version you want to use.
- Under the Workloads tab, click Game development with C++ if it isn’t checked and then click Modify.

1. Download the source code from the [Meta fork of Epic’s Unreal Engine on GitHub](https://github.com/Oculus-VR/UnrealEngine).
2. Follow Epic’s instructions on [Building Unreal Engine from Source](https://docs.unrealengine.com/5.2/en-US/building-unreal-engine-from-source/) to complete the process.
3. Launch the Unreal Editor
4. From "Recent Projects", click "Browse" and select `ColocationDiscovery.uproject`

Depending on your machine, the build may take awhile to complete.

## Licenses
The Meta License applies to the SDK and supporting material. The MIT License applies to only certain, clearly marked documents. If an individual file does not indicate which license it is subject to, then the Meta License applies.
