---
name: tilelang-github-operations
description: |
  GitHub 操作指南集合。支持的操作：(1) PR 工作流：提交代码、创建 Pull Request；(2) GitHub CLI 配置：安装、认证、Token 管理。触发关键词：PR、pull request、push、commit、gh 命令、GitHub CLI、提交代码、创建 PR 等。
---

# GitHub 操作指南

本技能提供 GitHub 操作的完整指导，帮助 AI Agent 正确执行 GitHub 相关任务。

---

## ⛔ 强制前置条件：必须先读取指南文件

**在执行任何 GitHub 操作之前，必须先使用 Read 工具读取对应的指南文件。**

本 skill 包含以下详细指南文件：

| 操作类型 | 指南文件路径 | 必须在何时读取 |
|----------|--------------|----------------|
| PR 工作流 | `pr-workflow-guide.md` | 提交代码、创建 PR、查看 PR 状态时 |
| GitHub CLI 配置 | `gh-cli-guide.md` | 首次使用 gh 命令、认证失败、需配置 Token 时 |

**正确的执行流程：**

```
1. 使用 Read 工具读取对应的指南文件
   → 示例：Read(pr-workflow-guide.md)

2. 严格遵循指南文件中的步骤执行操作

3. 遇到问题时，重新查阅指南文件中的「注意事项」部分
```

---

## 支持的操作

| 操作 | 说明 | 必读指南 |
|------|------|----------|
| **PR 工作流** | 提交代码并创建 Pull Request | [pr-workflow-guide.md](pr-workflow-guide.md) |
| **GitHub CLI 配置** | 安装、认证、Token 管理 | [gh-cli-guide.md](gh-cli-guide.md) |

---

## 执行步骤（强制遵循）

### 步骤 1：确定操作类型

根据用户请求确定需要执行的操作：

| 用户场景 | 操作类型 | 必读指南 |
|----------|----------|----------|
| 提交代码、创建 PR、查看 PR 状态 | PR 工作流 | `pr-workflow-guide.md` |
| 首次使用 gh、认证失败、需配置 Token | GitHub CLI 配置 | `gh-cli-guide.md` |

### 步骤 2：读取指南文件 ⚠️ 必须执行

**使用 Read 工具读取对应的指南文件，读取完整内容：**

```
Read 文件路径：.agents/skills/tilelang-custom-skill/tilelang-github-operations/<指南文件名>
```

### 步骤 3：按指南执行

严格遵循指南文件中的：
- 完整流程步骤
- 命令示例
- **注意事项**（特别重要）

---

## 扩展指南

添加新操作时需完成以下步骤：

1. 在本目录下创建新的 `.md` 文档
2. 在「支持的操作」表格中添加新条目
3. 在「用户场景」表格中添加对应场景
4. **更新头部 description 元数据**，添加新操作的名称和关键词

---

## 常见错误

| 错误 | 原因 | 解决方法 |
|------|------|----------|
| 未读取指南就执行操作 | 跳过步骤 2 | 必须先 Read 指南文件 |
| 忽略注意事项 | 未阅读完整指南 | 仔细阅读指南末尾的「注意事项」 |
| gh 命令失败 | 未安装或未认证 | 读取 `gh-cli-guide.md` |

---

> **警告**：跳过读取指南文件将导致操作失败或不符合规范。必须严格遵循上述步骤。