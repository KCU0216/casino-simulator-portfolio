# 소스 구성

[README로 돌아가기](../README.md)

이 저장소는 팀 프로젝트 전체의 복제본이 아니라 김찬울의 담당 구현을 선별한 코드 포트폴리오입니다. 코드 검토를 위해 원본 폴더 경로를 유지했습니다.

## 기능 구현 파일

다음 파일은 헤더 또는 구현 파일 단위로 수록했습니다. 참조하는 공통 클래스·Blueprint·게임 에셋은 이 저장소에 포함하지 않았습니다.

- [RaceGame/RaceManager.cpp](../Source/casino_simulator/RaceGame/RaceManager.cpp)
- [RaceGame/RaceManager.h](../Source/casino_simulator/RaceGame/RaceManager.h)
- [RaceGame/RaceRunner.cpp](../Source/casino_simulator/RaceGame/RaceRunner.cpp)
- [RaceGame/RaceRunner.h](../Source/casino_simulator/RaceGame/RaceRunner.h)
- [RaceGame/RaceTypes.h](../Source/casino_simulator/RaceGame/RaceTypes.h)
- [Interaction/InteractionSessionComponent.cpp](../Source/casino_simulator/Interaction/InteractionSessionComponent.cpp)
- [Interaction/InteractionSessionComponent.h](../Source/casino_simulator/Interaction/InteractionSessionComponent.h)
- [Mining/OrePickupBase.cpp](../Source/casino_simulator/Mining/OrePickupBase.cpp)
- [Mining/OrePickupBase.h](../Source/casino_simulator/Mining/OrePickupBase.h)
- [Mining/AbilityTask_MiningTargetData.cpp](../Source/casino_simulator/Mining/AbilityTask_MiningTargetData.cpp)
- [Mining/AbilityTask_MiningTargetData.h](../Source/casino_simulator/Mining/AbilityTask_MiningTargetData.h)
- [UI/LadderMachine.cpp](../Source/casino_simulator/UI/LadderMachine.cpp)
- [UI/LadderMachine.h](../Source/casino_simulator/UI/LadderMachine.h)
- [UI/LadderGenerator.cpp](../Source/casino_simulator/UI/LadderGenerator.cpp)
- [UI/LadderGenerator.h](../Source/casino_simulator/UI/LadderGenerator.h)
- [UI/LadderWidget.cpp](../Source/casino_simulator/UI/LadderWidget.cpp)
- [UI/LadderWidget.h](../Source/casino_simulator/UI/LadderWidget.h)
- [UI/LadderDisplayState.h](../Source/casino_simulator/UI/LadderDisplayState.h)
- [UI/CasinoSettingsSubsystem.cpp](../Source/casino_simulator/UI/CasinoSettingsSubsystem.cpp)
- [UI/CasinoSettingsSubsystem.h](../Source/casino_simulator/UI/CasinoSettingsSubsystem.h)

## 담당 구간 발췌 파일

아래 `.cpp` 파일은 전체 클래스 구현이 아니라 수평 운반 힘 계산 구간을 발췌했습니다. 원본 위치를 구간 주석에 기록했습니다.

| 파일 | 수록 범위 |
| --- | --- |
| [CartBase.cpp](../Source/casino_simulator/Mining/CartBase.cpp) | 목표 변위·속도의 Z 성분을 제외하는 수평 운반 힘 계산 |

## 인게임 이미지

README의 경마·사다리 화면은 프로젝트 인게임 캡처입니다. 팀 프로젝트의 경마와 사다리 플레이 화면을 보여줍니다.

## 기준 버전

선별 기준은 원본 로컬 저장소의 커밋 `500f8699253b789b1c852821b2de48dd0ac8050f`입니다. 이 개인 저장소에는 원본 팀 저장소의 Git 기록을 가져오지 않았습니다.
